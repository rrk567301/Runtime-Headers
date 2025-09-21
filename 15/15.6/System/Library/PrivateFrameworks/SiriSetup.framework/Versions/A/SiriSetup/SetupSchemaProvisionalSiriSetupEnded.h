@class NSData;

@interface SetupSchemaProvisionalSiriSetupEnded : SISchemaInstrumentationMessage {
    struct { unsigned char siriEnabled : 1; unsigned char dismissed : 1; } _has;
}

@property (nonatomic) char siriEnabled;
@property (nonatomic) char hasSiriEnabled;
@property (nonatomic) char dismissed;
@property (nonatomic) char hasDismissed;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDismissed;
- (void)deleteSiriEnabled;

@end
