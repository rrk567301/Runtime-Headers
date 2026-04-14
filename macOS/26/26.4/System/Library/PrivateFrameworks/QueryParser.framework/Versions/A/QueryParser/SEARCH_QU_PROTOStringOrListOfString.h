@class NSString, SEARCH_QU_PROTOStringList;

@interface SEARCH_QU_PROTOStringOrListOfString : PBCodable <NSCopying> {
    struct { unsigned char valueOption : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSingleValue;
@property (retain, nonatomic) NSString *singleValue;
@property (readonly, nonatomic) BOOL hasMultiValue;
@property (retain, nonatomic) SEARCH_QU_PROTOStringList *multiValue;
@property (nonatomic) BOOL hasValueOption;
@property (nonatomic) int valueOption;

+ (id)flatFromWrapper:(id)a0;
+ (id)initWithParseJsonDict:(id)a0 forKey:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsValueOption:(id)a0;
- (void)clearOneofValuesForValueOption;
- (id)valueOptionAsString:(int)a0;

@end
