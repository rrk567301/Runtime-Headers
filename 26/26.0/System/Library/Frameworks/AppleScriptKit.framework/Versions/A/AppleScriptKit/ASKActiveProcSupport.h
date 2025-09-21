@interface ASKActiveProcSupport : NSObject {
    void /* function */ *_oldActiveProc;
    void /* function */ *_activeProc;
}

+ (id)sharedActiveProcSupport;

- (void)setup;
- (id)init;
- (void)didFinishLaunching:(id)a0;

@end
