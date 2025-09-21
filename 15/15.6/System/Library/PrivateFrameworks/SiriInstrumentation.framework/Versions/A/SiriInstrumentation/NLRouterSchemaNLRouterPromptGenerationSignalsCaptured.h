@class NSData;

@interface NLRouterSchemaNLRouterPromptGenerationSignalsCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char isAppFocused : 1; unsigned char isMediaRichAppFocused : 1; unsigned char isMediaFocused : 1; unsigned char isMailAppFocused : 1; } _has;
}

@property (nonatomic) char isAppFocused;
@property (nonatomic) char hasIsAppFocused;
@property (nonatomic) char isMediaRichAppFocused;
@property (nonatomic) char hasIsMediaRichAppFocused;
@property (nonatomic) char isMediaFocused;
@property (nonatomic) char hasIsMediaFocused;
@property (nonatomic) char isMailAppFocused;
@property (nonatomic) char hasIsMailAppFocused;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsAppFocused;
- (void)deleteIsMailAppFocused;
- (void)deleteIsMediaFocused;
- (void)deleteIsMediaRichAppFocused;
- (id)suppressMessageUnderConditions;

@end
