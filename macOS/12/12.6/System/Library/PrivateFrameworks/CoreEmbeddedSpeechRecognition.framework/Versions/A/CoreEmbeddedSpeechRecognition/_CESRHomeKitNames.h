@class NSMutableSet;

@interface _CESRHomeKitNames : NSObject

@property (readonly, nonatomic) NSMutableSet *homeNames;
@property (readonly, nonatomic) NSMutableSet *roomNames;
@property (readonly, nonatomic) NSMutableSet *zoneNames;
@property (readonly, nonatomic) NSMutableSet *deviceNames;
@property (readonly, nonatomic) NSMutableSet *groupNames;
@property (readonly, nonatomic) NSMutableSet *sceneNames;

- (id)init;
- (void).cxx_destruct;

@end
