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

- (void)setScene:(id)a0;
- (id)initWithScene:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)invalidate;
- (id)scene;
- (id)clientScene;
- (id)hostScene;

@end
