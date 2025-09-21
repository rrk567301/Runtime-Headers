@class FBSceneSnapshotContext, IOSurface, _FBSSnapshot, FBScene;
@protocol FBSceneSnapshotInternalConfiguration;

@interface FBSceneSnapshot : NSObject {
    _FBSSnapshot *_snapshot;
}

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, copy, nonatomic) id<FBSceneSnapshotInternalConfiguration> configuration;
@property (readonly, copy, nonatomic) FBSceneSnapshotContext *context;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic) IOSurface *IOSurface;
@property (readonly, nonatomic) IOSurface *fallbackIOSurface;
@property (readonly, nonatomic) struct CGImage { } *CGImage;

- (id)initWithScene:(id)a0 context:(id)a1;
- (BOOL)capture;
- (void).cxx_destruct;

@end
