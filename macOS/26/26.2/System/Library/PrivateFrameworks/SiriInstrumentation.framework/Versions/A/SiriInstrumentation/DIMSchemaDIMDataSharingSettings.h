@class NSData;

@interface DIMSchemaDIMDataSharingSettings : SISchemaInstrumentationMessage {
    struct { unsigned char isDiagnosticsAndUsageEnabled : 1; unsigned char isAppAnalyticsEnabled : 1; } _has;
}

@property (nonatomic) BOOL isDiagnosticsAndUsageEnabled;
@property (nonatomic) BOOL hasIsDiagnosticsAndUsageEnabled;
@property (nonatomic) BOOL isAppAnalyticsEnabled;
@property (nonatomic) BOOL hasIsAppAnalyticsEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteIsAppAnalyticsEnabled;
- (void)deleteIsDiagnosticsAndUsageEnabled;

@end
