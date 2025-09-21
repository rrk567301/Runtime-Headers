@class NSString;

@interface BCSCallToAction : PBCodable <NSCopying> {
    struct { unsigned char isDefault : 1; } _has;
}

@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) char hasIsDefault;
@property (nonatomic) char isDefault;
@property (readonly, nonatomic) char hasBody;
@property (retain, nonatomic) NSString *body;

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
