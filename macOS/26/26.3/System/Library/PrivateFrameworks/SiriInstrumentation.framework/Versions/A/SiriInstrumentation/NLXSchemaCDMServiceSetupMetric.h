@class NSData;

@interface NLXSchemaCDMServiceSetupMetric : SISchemaInstrumentationMessage {
    struct { unsigned char serviceType : 1; unsigned char startLogicalTimestampInNs : 1; unsigned char endLogicalTimestampInNs : 1; unsigned char failureReason : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) int serviceType;
@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) long long startLogicalTimestampInNs;
@property (nonatomic) BOOL hasStartLogicalTimestampInNs;
@property (nonatomic) long long endLogicalTimestampInNs;
@property (nonatomic) BOOL hasEndLogicalTimestampInNs;
@property (nonatomic) int failureReason;
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteErrorCode;
- (void)deleteStartLogicalTimestampInNs;
- (void)deleteEndLogicalTimestampInNs;
- (void)deleteFailureReason;
- (void)deleteServiceType;

@end
