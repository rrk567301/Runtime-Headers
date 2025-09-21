@class NSMutableArray, _MRLanguageOptionProtobuf;

@interface _MRLanguageOptionGroupProtobuf : PBCodable <NSCopying> {
    struct { unsigned char allowEmptySelection : 1; } _has;
}

@property (nonatomic) char hasAllowEmptySelection;
@property (nonatomic) char allowEmptySelection;
@property (readonly, nonatomic) char hasDefaultLanguageOption;
@property (retain, nonatomic) _MRLanguageOptionProtobuf *defaultLanguageOption;
@property (retain, nonatomic) NSMutableArray *languageOptions;

+ (Class)languageOptionsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLanguageOptions:(id)a0;
- (void)clearLanguageOptions;
- (id)languageOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)languageOptionsCount;

@end
