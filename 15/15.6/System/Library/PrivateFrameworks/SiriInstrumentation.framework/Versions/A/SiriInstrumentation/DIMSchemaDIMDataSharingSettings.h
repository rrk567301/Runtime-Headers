@class NSData;

@interface DIMSchemaDIMDataSharingSettings : SISchemaInstrumentationMessage {
    struct { unsigned char isDiagnosticsAndUsageEnabled : 1; unsigned char isAppAnalyticsEnabled : 1; } _has;
}

@property (nonatomic) char isDiagnosticsAndUsageEnabled;
@property (nonatomic) char hasIsDiagnosticsAndUsageEnabled;
@property (nonatomic) char isAppAnalyticsEnabled;
@property (nonatomic) char hasIsAppAnalyticsEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsAppAnalyticsEnabled;
- (void)deleteIsDiagnosticsAndUsageEnabled;
- (id)suppressMessageUnderConditions;

@end
