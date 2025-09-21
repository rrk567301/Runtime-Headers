@class NSString, NSArray, NSData;

@interface UAFSchemaUAFAssetSubscriberSubscriptions : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *subscriberName;
@property (nonatomic) BOOL hasSubscriberName;
@property (copy, nonatomic) NSArray *subscriptions;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)clearSubscriptions;
- (id)dictionaryRepresentation;
- (id)subscriptionsAtIndex:(unsigned long long)a0;
- (void)addSubscriptions:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)subscriptionsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteSubscriberName;
- (void)deleteSubscriptions;

@end
