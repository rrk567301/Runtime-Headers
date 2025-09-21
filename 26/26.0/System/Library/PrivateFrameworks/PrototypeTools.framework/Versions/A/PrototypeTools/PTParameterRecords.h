@class NSMutableDictionary;

@interface PTParameterRecords : NSObject

@property (retain, nonatomic) NSMutableDictionary *recordDictionary;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)addRecordWithKeyPath:(id)a0 domainID:(id)a1 recordClassName:(id)a2 value:(id)a3;
- (void)removeRecordWithKeyPath:(id)a0 domainID:(id)a1;

@end
