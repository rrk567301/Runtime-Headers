@class NSString, NSData;

@interface NETSchemaNETNetworkConnectionStateReadySnapshotCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char connectionEstablishmentPreviousAttemptCount : 1; unsigned char connectionEstablishmentAttemptDelay : 1; } _has;
}

@property (copy, nonatomic) NSString *connectionInfo;
@property (nonatomic) BOOL hasConnectionInfo;
@property (nonatomic) unsigned int connectionEstablishmentPreviousAttemptCount;
@property (nonatomic) BOOL hasConnectionEstablishmentPreviousAttemptCount;
@property (nonatomic) unsigned int connectionEstablishmentAttemptDelay;
@property (nonatomic) BOOL hasConnectionEstablishmentAttemptDelay;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteConnectionInfo;
- (void)deleteConnectionEstablishmentPreviousAttemptCount;
- (void)deleteConnectionEstablishmentAttemptDelay;

@end
