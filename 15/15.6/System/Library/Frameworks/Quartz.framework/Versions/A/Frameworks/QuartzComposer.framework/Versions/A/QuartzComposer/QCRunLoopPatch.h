@interface QCRunLoopPatch : QCPatch {
    void *_unused4[4];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)runLoop;
- (char)setup:(id)a0;
- (void)_runLoopThread:(id)a0;
- (void)cleanup:(id)a0;
- (void)performSelectorOnRunloop:(SEL)a0 withArgument:(id)a1 waitForCompletion:(char)a2;

@end
