@class NSString, NSArray, NSData;

@interface UAFSchemaUAFAssetSubscriberSubscriptions : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *subscriberName;
@property (nonatomic) BOOL hasSubscriberName;
@property (copy, nonatomic) NSArray *subscriptions;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)subscriptionsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addSubscriptions:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)subscriptionsCount;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearSubscriptions;
- (id)initWithJSON:(id)a0;
- (void)deleteSubscriberName;
- (void)deleteSubscriptions;

@end
