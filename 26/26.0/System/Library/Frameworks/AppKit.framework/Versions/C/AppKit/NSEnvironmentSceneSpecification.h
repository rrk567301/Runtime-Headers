@class NSArray;

@interface NSEnvironmentSceneSpecification : FBSSceneSpecification

@property (nonatomic, readonly) BOOL isAppKitSubclass;
@property (nonatomic, readonly) NSArray *defaultExtensions;

- (id)init;

@end
