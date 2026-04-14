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

- (void)invalidate;
- (id)scene;
- (id)initWithScene:(id)a0;
- (void).cxx_destruct;
- (void)setScene:(id)a0;
- (BOOL)isValid;
- (id)clientScene;
- (id)hostScene;

@end
