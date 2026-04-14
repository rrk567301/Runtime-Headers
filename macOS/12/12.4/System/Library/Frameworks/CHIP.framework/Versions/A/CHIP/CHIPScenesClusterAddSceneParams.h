@class NSNumber, NSString, NSArray;

@interface CHIPScenesClusterAddSceneParams : NSObject

@property (retain, nonatomic) NSNumber *groupId;
@property (retain, nonatomic) NSNumber *sceneId;
@property (retain, nonatomic) NSNumber *transitionTime;
@property (retain, nonatomic) NSString *sceneName;
@property (retain, nonatomic) NSArray *extensionFieldSets;

- (id)init;
- (void).cxx_destruct;

@end
