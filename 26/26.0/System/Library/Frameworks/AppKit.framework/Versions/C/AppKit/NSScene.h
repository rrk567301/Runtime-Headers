@class NSSceneSession, FBSScene;
@protocol NSSceneDelegate;

@interface NSScene : NSResponder {
    void /* unknown type, empty encoding */ invalidated;
    void /* unknown type, empty encoding */ underlyingFBSScene;
}

@property (nonatomic, readonly) NSSceneSession *session;
@property (nonatomic, retain) id<NSSceneDelegate> delegate;
@property (nonatomic, readonly) FBSScene *_FBSScene;

+ (id)_sceneForFBSScene:(id)a0;

- (id)initWithSession:(id)a0 connectionOptions:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
