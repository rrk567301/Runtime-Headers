@class JSValue;

@interface MusicUI.JSUserSocialProfileCoordinator : NSObject <_TtP7MusicUIP33_7FE1355BF44CECB8BC6467E452F3DC1237JSUserSocialProfileCoordinatorExports_> {
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
