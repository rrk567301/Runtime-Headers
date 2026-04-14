@class NSData;

@interface SISchemaDeviceLockStateChanged : SISchemaInstrumentationMessage {
    struct { unsigned char isDeviceLocked : 1; } _has;
}

@property (nonatomic) BOOL isDeviceLocked;
@property (nonatomic) BOOL hasIsDeviceLocked;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsDeviceLocked;

@end
