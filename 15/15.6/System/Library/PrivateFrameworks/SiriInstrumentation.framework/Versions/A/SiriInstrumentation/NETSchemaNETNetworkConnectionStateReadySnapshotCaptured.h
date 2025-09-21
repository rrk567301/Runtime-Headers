@class NSString, NSData;

@interface NETSchemaNETNetworkConnectionStateReadySnapshotCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char connectionEstablishmentPreviousAttemptCount : 1; unsigned char connectionEstablishmentAttemptDelay : 1; } _has;
}

@property (copy, nonatomic) NSString *connectionInfo;
@property (nonatomic) char hasConnectionInfo;
@property (nonatomic) unsigned int connectionEstablishmentPreviousAttemptCount;
@property (nonatomic) char hasConnectionEstablishmentPreviousAttemptCount;
@property (nonatomic) unsigned int connectionEstablishmentAttemptDelay;
@property (nonatomic) char hasConnectionEstablishmentAttemptDelay;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConnectionEstablishmentAttemptDelay;
- (void)deleteConnectionEstablishmentPreviousAttemptCount;
- (void)deleteConnectionInfo;
- (id)suppressMessageUnderConditions;

@end
