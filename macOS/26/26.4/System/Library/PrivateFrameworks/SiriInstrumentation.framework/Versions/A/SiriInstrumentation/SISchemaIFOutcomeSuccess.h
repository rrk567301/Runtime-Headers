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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDidShowInAppResult;
- (void)deleteFollowUpActionBundleId;
- (void)deleteShouldOpen;

@end
