@class NSData;

@interface NLRouterSchemaNLRouterPromptGenerationSignalsCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char isAppFocused : 1; unsigned char isMediaRichAppFocused : 1; unsigned char isMediaFocused : 1; unsigned char isMailAppFocused : 1; } _has;
}

@property (nonatomic) BOOL isAppFocused;
@property (nonatomic) BOOL hasIsAppFocused;
@property (nonatomic) BOOL isMediaRichAppFocused;
@property (nonatomic) BOOL hasIsMediaRichAppFocused;
@property (nonatomic) BOOL isMediaFocused;
@property (nonatomic) BOOL hasIsMediaFocused;
@property (nonatomic) BOOL isMailAppFocused;
@property (nonatomic) BOOL hasIsMailAppFocused;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteIsAppFocused;
- (void)deleteIsMailAppFocused;
- (void)deleteIsMediaFocused;
- (void)deleteIsMediaRichAppFocused;

@end
