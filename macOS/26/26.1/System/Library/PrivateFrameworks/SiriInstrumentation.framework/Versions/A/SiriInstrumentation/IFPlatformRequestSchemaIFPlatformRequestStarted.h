@class NSData;

@interface IFPlatformRequestSchemaIFPlatformRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char ifPlatformRequestTarget : 1; } _has;
}

@property (nonatomic) int ifPlatformRequestTarget;
@property (nonatomic) BOOL hasIfPlatformRequestTarget;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteIfPlatformRequestTarget;

@end
