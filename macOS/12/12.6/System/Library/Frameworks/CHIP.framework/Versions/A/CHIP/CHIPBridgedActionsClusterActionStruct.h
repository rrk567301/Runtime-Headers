@class NSNumber, NSString;

@interface CHIPBridgedActionsClusterActionStruct : NSObject

@property (retain, nonatomic) NSNumber *actionID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *endpointListID;
@property (retain, nonatomic) NSNumber *supportedCommands;
@property (retain, nonatomic) NSNumber *status;

- (id)init;
- (void).cxx_destruct;

@end
