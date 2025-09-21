@class NSString;
@protocol FBSComponentScene;

@interface FBSSceneComponent : NSObject <FBSSceneComponent> {
    id<FBSComponentScene> _scene;
    BOOL _invalid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(id)a0;
- (void)setScene:(id)a0;
- (id)scene;
- (BOOL)isValid;
- (void)invalidate;
- (void).cxx_destruct;
- (id)clientScene;
- (id)hostScene;

@end
