@class DMManager;

@interface SMDMManager : NSObject {
    DMManager *_dm;
    struct __DASession { } *_daSession;
}

+ (void)initialize;
+ (id)sharedSMDMManager;

- (void)tearDown;
- (id)manager;
- (id)init;
- (void).cxx_destruct;
- (struct __DASession { } *)daSession;
- (struct __DADisk { } *)copyDiskForDiskIdentifier:(id)a0;

@end
