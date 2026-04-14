@class NSMutableArray;

@interface ATXNotificationEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSMutableArray *secondsToEngagement;

- (id)initFromJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
