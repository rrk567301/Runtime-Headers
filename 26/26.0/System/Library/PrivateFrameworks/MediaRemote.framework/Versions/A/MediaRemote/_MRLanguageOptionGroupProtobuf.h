@class NSMutableArray, _MRLanguageOptionProtobuf;

@interface _MRLanguageOptionGroupProtobuf : PBCodable <NSCopying> {
    struct { unsigned char allowEmptySelection : 1; } _has;
}

@property (nonatomic) BOOL hasAllowEmptySelection;
@property (nonatomic) BOOL allowEmptySelection;
@property (readonly, nonatomic) BOOL hasDefaultLanguageOption;
@property (retain, nonatomic) _MRLanguageOptionProtobuf *defaultLanguageOption;
@property (retain, nonatomic) NSMutableArray *languageOptions;

+ (Class)languageOptionsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addLanguageOptions:(id)a0;
- (void)clearLanguageOptions;
- (id)languageOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)languageOptionsCount;

@end
