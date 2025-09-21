@class FBSystemShellInitializationOptions;

@interface FBSystemShellInitializationContext : NSObject <NSCopying> {
    char _bootedDark;
}

@property (readonly, nonatomic) FBSystemShellInitializationOptions *options;
@property (readonly, nonatomic) unsigned long long lastExitReason;
@property (readonly, nonatomic, getter=wasBootedDark) char bootedDark;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithOptions:(id)a0;

@end
