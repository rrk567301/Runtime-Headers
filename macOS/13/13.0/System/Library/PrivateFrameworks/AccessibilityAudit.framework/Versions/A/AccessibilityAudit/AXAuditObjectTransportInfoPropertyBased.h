@class NSArray, NSMutableArray;

@interface AXAuditObjectTransportInfoPropertyBased : AXAuditObjectTransportInfo

@property (retain, nonatomic) NSMutableArray *_propertyEntries;
@property (retain, nonatomic) Class entryClass;
@property (readonly, nonatomic) NSArray *propertyEntries;

- (id)init;
- (void).cxx_destruct;
- (id)initWithClass:(Class)a0 transportKey:(id)a1;
- (id)propertyEntries;
- (void)_initializeBlocks;
- (void)addPropertyEntry:(id)a0;

@end
