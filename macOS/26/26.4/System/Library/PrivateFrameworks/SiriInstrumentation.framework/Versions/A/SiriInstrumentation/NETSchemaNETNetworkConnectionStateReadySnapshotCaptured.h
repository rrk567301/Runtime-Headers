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

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConnectionEstablishmentAttemptDelay;
- (void)deleteConnectionEstablishmentPreviousAttemptCount;
- (void)deleteConnectionInfo;

@end
