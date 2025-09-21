@class NSData;

@interface FLOWSchemaFLOWLocationAccessPermissionPromptEnded : SISchemaInstrumentationMessage {
    struct { unsigned char permissionStatusResult : 1; unsigned char isPreciseLocationResult : 1; } _has;
}

@property (nonatomic) int permissionStatusResult;
@property (nonatomic) char hasPermissionStatusResult;
@property (nonatomic) char isPreciseLocationResult;
@property (nonatomic) char hasIsPreciseLocationResult;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsPreciseLocationResult;
- (void)deletePermissionStatusResult;
- (id)suppressMessageUnderConditions;

@end
