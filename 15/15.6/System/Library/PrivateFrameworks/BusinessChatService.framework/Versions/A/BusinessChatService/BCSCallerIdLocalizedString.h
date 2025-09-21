@class NSString;

@interface BCSCallerIdLocalizedString : PBCodable <NSCopying> {
    struct { unsigned char isDefault : 1; } _has;
}

@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) char hasText;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) char hasIsDefault;
@property (nonatomic) char isDefault;

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

@end
