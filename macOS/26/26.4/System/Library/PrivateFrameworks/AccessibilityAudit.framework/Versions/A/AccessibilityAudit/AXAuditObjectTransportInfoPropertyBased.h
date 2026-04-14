@class NSArray, NSMutableArray;

@interface AXAuditObjectTransportInfoPropertyBased : AXAuditObjectTransportInfo

@property (retain, nonatomic) NSMutableArray *_propertyEntries;
@property (retain, nonatomic) Class entryClass;
@property (readonly, nonatomic) NSArray *propertyEntries;

- (void).cxx_destruct;
- (id)init;
- (id)propertyEntries;
- (void)_initializeBlocks;
- (void)addPropertyEntry:(id)a0;
- (id)initWithClass:(Class)a0 transportKey:(id)a1;

@end
