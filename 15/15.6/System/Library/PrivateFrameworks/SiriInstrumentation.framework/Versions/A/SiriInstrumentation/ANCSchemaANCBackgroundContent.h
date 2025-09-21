@class NSData;

@interface ANCSchemaANCBackgroundContent : SISchemaInstrumentationMessage {
    struct { unsigned char mediaType : 1; unsigned char isFocusModeEnabled : 1; } _has;
}

@property (nonatomic) int mediaType;
@property (nonatomic) char hasMediaType;
@property (nonatomic) char isFocusModeEnabled;
@property (nonatomic) char hasIsFocusModeEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMediaType;
- (void)deleteIsFocusModeEnabled;
- (id)suppressMessageUnderConditions;

@end
