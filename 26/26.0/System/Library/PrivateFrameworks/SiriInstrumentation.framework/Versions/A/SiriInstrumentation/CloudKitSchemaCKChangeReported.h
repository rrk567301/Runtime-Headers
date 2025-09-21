@class NSData;

@interface CloudKitSchemaCKChangeReported : SISchemaInstrumentationMessage {
    struct { unsigned char changeType : 1; unsigned char changeTokenExpired : 1; } _has;
}

@property (nonatomic) int changeType;
@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) BOOL changeTokenExpired;
@property (nonatomic) BOOL hasChangeTokenExpired;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteChangeTokenExpired;
- (void)deleteChangeType;

@end
