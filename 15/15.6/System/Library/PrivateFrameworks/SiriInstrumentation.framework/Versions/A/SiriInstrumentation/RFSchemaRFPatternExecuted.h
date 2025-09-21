@class NSString, NSData;

@interface RFSchemaRFPatternExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char pattern : 1; unsigned char mode : 1; } _has;
}

@property (copy, nonatomic) NSString *patternId;
@property (nonatomic) char hasPatternId;
@property (nonatomic) int pattern;
@property (nonatomic) char hasPattern;
@property (nonatomic) int mode;
@property (nonatomic) char hasMode;
@property (copy, nonatomic) NSString *responseViewId;
@property (nonatomic) char hasResponseViewId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePatternId;
- (void)deleteMode;
- (void)deletePattern;
- (void)deleteResponseViewId;
- (id)suppressMessageUnderConditions;

@end
