Name:       qml-module-clipboard

Summary:    Qt QML Module for Clipboard
Version:    1.0.0
Release:    1
Group:      Qt/Qt
License:    MIT
URL:        https://github.com/rinigus/qml-module-clipboard
Source0:    %{name}-%{version}.tar.bz2
BuildRequires:  pkgconfig(Qt5Core)
BuildRequires:  pkgconfig(Qt5Qml)
BuildRequires:  pkgconfig(Qt5Quick)

%description
%summary


%prep
%setup -q -n %{name}-%{version}

%build

%qmake_qt5
make %{?_smp_mflags}

%install
rm -rf %{buildroot}
make install INSTALL_ROOT=%{buildroot}

%files
%defattr(-,root,root,-)
%{_qt5_qmldir}/Clipboard
