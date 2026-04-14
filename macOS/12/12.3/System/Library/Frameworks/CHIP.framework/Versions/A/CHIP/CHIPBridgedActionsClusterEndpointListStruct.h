@class NSNumber, NSString, NSArray;

@interface CHIPBridgedActionsClusterEndpointListStruct : NSObject

@property (retain, nonatomic) NSNumber *endpointListID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSArray *endpoints;

- (id)init;
- (void).cxx_destruct;

@end
