@class NSMutableArray;

@interface ATXNotificationEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSMutableArray *secondsToEngagement;

- (id)initFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)init;

@end
