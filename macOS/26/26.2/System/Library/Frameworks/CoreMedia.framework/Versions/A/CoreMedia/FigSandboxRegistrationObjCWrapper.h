@interface FigSandboxRegistrationObjCWrapper : NSObject {
    struct FigOpaqueSandboxRegistration { } *sandboxreg;
}

- (id)initWithRegistration:(struct FigOpaqueSandboxRegistration { } *)a0;
- (struct FigOpaqueSandboxRegistration { } *)_sandboxRegistration;
- (void)dealloc;

@end
