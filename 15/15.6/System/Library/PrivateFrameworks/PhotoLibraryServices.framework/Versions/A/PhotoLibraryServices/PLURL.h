@interface PLURL : NSURL {
    _Atomic unsigned short _ssbCounter;
}

- (void)dealloc;
- (char)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;
- (id)replacementObjectForCoder:(id)a0;

@end
