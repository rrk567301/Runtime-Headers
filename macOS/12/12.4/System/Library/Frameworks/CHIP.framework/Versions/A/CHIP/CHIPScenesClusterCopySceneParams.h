@class NSNumber;

@interface CHIPScenesClusterCopySceneParams : NSObject

@property (retain, nonatomic) NSNumber *mode;
@property (retain, nonatomic) NSNumber *groupIdFrom;
@property (retain, nonatomic) NSNumber *sceneIdFrom;
@property (retain, nonatomic) NSNumber *groupIdTo;
@property (retain, nonatomic) NSNumber *sceneIdTo;

- (id)init;
- (void).cxx_destruct;

@end
