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
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deletePatternId;
- (void)deletePattern;
- (void)deleteMode;

@end
