@class NSDictionary, NSArray, NSObject;
@protocol DNDSContactProviding, DNDSApplicationIdentifierMapping, DNDSBackingStoreRecord;

@interface DNDSMutableBackingStoreDictionaryContext : DNDSBackingStoreDictionaryContext

@property (nonatomic) unsigned long long destination;
@property (nonatomic) unsigned long long partitionType;
@property (nonatomic) char redactSensitiveData;
@property (retain, nonatomic) id<DNDSContactProviding> contactProvider;
@property (retain, nonatomic) id<DNDSApplicationIdentifierMapping> applicationIdentifierMapper;
@property (retain, nonatomic) NSDictionary *healingSource;
@property (retain, nonatomic) NSArray *arrayHealingSource;
@property (retain, nonatomic) NSObject<DNDSBackingStoreRecord> *currentRecord;

- (void)setDestination:(unsigned long long)a0;
- (void)setPartitionType:(unsigned long long)a0;
- (void)setContactProvider:(id)a0;
- (void)setApplicationIdentifierMapper:(id)a0;
- (void)setArrayHealingSource:(id)a0;
- (void)setCurrentRecord:(id)a0;
- (void)setHealingSource:(id)a0;
- (void)setRedactSensitiveData:(char)a0;

@end
