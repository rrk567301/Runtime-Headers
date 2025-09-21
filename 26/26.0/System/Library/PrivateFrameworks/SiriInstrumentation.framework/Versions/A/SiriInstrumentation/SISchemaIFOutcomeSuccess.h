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

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteDidShowInAppResult;
- (void)deleteFollowUpActionBundleId;
- (void)deleteShouldOpen;

@end
