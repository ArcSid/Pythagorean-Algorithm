{ pkgs }: {
	deps = [
		pkgs.python39Packages.bootstrapped-pip
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
    pkgs.python39
    pkgs.python39Packages.matplotlib
    pkgs.python39Packages.numpy
	];
}