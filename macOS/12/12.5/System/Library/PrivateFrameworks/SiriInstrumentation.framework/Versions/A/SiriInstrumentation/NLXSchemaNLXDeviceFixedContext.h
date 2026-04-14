@class NSData;

@interface NLXSchemaNLXDeviceFixedContext : SISchemaInstrumentationMessage {
    struct { unsigned char isTestEvent : 1; } _has;
}

@property (nonatomic) BOOL isTestEvent;
@property (nonatomic) BOOL hasIsTestEvent;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsTestEvent;
- (id)suppressMessageUnderConditions;

@end
