@class JSValue;

@interface MusicUI_Mac.JSUserSocialProfileCoordinator : NSObject <_TtP11MusicUI_MacP33_40D0F1A0EC2B05FC3832D34397186C6B37JSUserSocialProfileCoordinatorExports_> {
    void /* unknown type, empty encoding */ userSocialProfileCoordinator;
    void /* unknown type, empty encoding */ socialGraphController;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ pendingProfileFetch;
    void /* unknown type, empty encoding */ pendingIsCloudAndMediaAccountIdenticalFetch;
}

@property (nonatomic, readonly) JSValue *userProfile;

- (void).cxx_destruct;
- (id)init;
- (id)fetchIsCloudAndMediaAccountIdentical;
- (id)fetchUserSocialProfile;

@end
