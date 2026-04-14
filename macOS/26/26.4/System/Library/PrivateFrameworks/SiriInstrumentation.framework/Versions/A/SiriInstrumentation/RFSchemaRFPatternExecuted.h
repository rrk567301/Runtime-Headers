@class NSString, NSData;

@interface RFSchemaRFPatternExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char pattern : 1; unsigned char mode : 1; } _has;
}

@property (copy, nonatomic) NSString *patternId;
@property (nonatomic) BOOL hasPatternId;
@property (nonatomic) int pattern;
@property (nonatomic) BOOL hasPattern;
@property (nonatomic) int mode;
@property (nonatomic) BOOL hasMode;
@property (copy, nonatomic) NSString *responseViewId;
@property (nonatomic) BOOL hasResponseViewId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePatternId;
- (void)deleteMode;
- (void)deletePattern;
- (void)deleteResponseViewId;

@end
