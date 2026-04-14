@class NSString, NSData;

@interface SISchemaIFOutcomeSuccess : SISchemaInstrumentationMessage {
    struct { unsigned char didShowInAppResult : 1; unsigned char shouldOpen : 1; } _has;
}

@property (nonatomic) BOOL didShowInAppResult;
@property (nonatomic) BOOL hasDidShowInAppResult;
@property (copy, nonatomic) NSString *followUpActionBundleId;
@property (nonatomic) BOOL hasFollowUpActionBundleId;
@property (nonatomic) BOOL shouldOpen;
@property (nonatomic) BOOL hasShouldOpen;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteDidShowInAppResult;
- (void)deleteFollowUpActionBundleId;
- (void)deleteShouldOpen;

@end
