@interface CNKHUDActivityManager : NSObject {
    void /* unknown type, empty encoding */ displayResolver;
    void /* unknown type, empty encoding */ features;
    void /* unknown type, empty encoding */ _bannerPresentationManager;
    void /* unknown type, empty encoding */ presentedActivity;
    void /* unknown type, empty encoding */ updates;
    void /* unknown type, empty encoding */ activities;
}

@property (class, nonatomic, readonly) CNKHUDActivityManager *sharedManager;

- (void).cxx_destruct;
- (id)init;

@end
