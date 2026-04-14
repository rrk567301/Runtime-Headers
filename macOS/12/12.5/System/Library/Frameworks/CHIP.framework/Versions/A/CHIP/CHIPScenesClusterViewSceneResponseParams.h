@class NSNumber, NSString, NSArray;

@interface CHIPScenesClusterViewSceneResponseParams : NSObject

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *groupId;
@property (retain, nonatomic) NSNumber *sceneId;
@property (retain, nonatomic) NSNumber *transitionTime;
@property (retain, nonatomic) NSString *sceneName;
@property (retain, nonatomic) NSArray *extensionFieldSets;

- (id)init;
- (void).cxx_destruct;

@end
