@class NSMutableArray;

@interface ATXFakeEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSMutableArray *identifiersAndDates;

- (id)initFromJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
