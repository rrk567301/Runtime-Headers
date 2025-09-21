@class NSString;

@interface NTPBSectionDisplayDescriptor : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasNameColorLight;
@property (retain, nonatomic) NSString *nameColorLight;
@property (readonly, nonatomic) char hasBackgroundGradientColor;
@property (retain, nonatomic) NSString *backgroundGradientColor;
@property (readonly, nonatomic) char hasActionTitle;
@property (retain, nonatomic) NSString *actionTitle;
@property (readonly, nonatomic) char hasActionURLString;
@property (retain, nonatomic) NSString *actionURLString;
@property (readonly, nonatomic) char hasNameColorDark;
@property (retain, nonatomic) NSString *nameColorDark;
@property (readonly, nonatomic) char hasNameActionURLString;
@property (retain, nonatomic) NSString *nameActionURLString;
@property (readonly, nonatomic) char hasBackgroundColorLight;
@property (retain, nonatomic) NSString *backgroundColorLight;
@property (readonly, nonatomic) char hasBackgroundColorDark;
@property (retain, nonatomic) NSString *backgroundColorDark;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
