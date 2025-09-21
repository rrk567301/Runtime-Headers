@protocol NSPersistentUIRestorerDelegation;

@interface NSWindowRestorationOptions : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ _launchRestoration;
    void /* unknown type, empty encoding */ _restorerDelegateStorage;
}

@property (nonatomic) BOOL restoreToActiveSpacesOnly;
@property (nonatomic) BOOL _launchRestoration;
@property (nonatomic, retain) id<NSPersistentUIRestorerDelegation> _restorerDelegate;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_isLaunchRestoration;
- (void)_setLaunchRestoration:(BOOL)a0;
- (void)_setRestorerDelegate:(id)a0;

@end
