@class NSString, NSMutableArray;

@interface BCSBusinessLinkMessage : PBCodable <NSCopying> {
    struct { unsigned char action : 1; unsigned char isPoweredBy : 1; } _has;
}

@property (readonly, nonatomic) char hasLink;
@property (retain, nonatomic) NSString *link;
@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) char hasHeroImage;
@property (retain, nonatomic) NSString *heroImage;
@property (readonly, nonatomic) char hasIconImage;
@property (retain, nonatomic) NSString *iconImage;
@property (readonly, nonatomic) char hasRedirectUrl;
@property (retain, nonatomic) NSString *redirectUrl;
@property (retain, nonatomic) NSMutableArray *businessLinkContents;
@property (nonatomic) char hasAction;
@property (nonatomic) int action;
@property (nonatomic) char hasIsPoweredBy;
@property (nonatomic) char isPoweredBy;
@property (readonly, nonatomic) char hasMuid;
@property (retain, nonatomic) NSString *muid;
@property (retain, nonatomic) NSMutableArray *categoryStyleAttributes;

+ (Class)businessLinkContentsType;
+ (Class)categoryStyleAttributesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)actionAsString:(int)a0;
- (void)copyTo:(id)a0;
- (int)StringAsAction:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)categoryStyleAttributesAtIndex:(unsigned long long)a0;
- (void)addBusinessLinkContents:(id)a0;
- (void)addCategoryStyleAttributes:(id)a0;
- (id)businessLinkContentsAtIndex:(unsigned long long)a0;
- (unsigned long long)businessLinkContentsCount;
- (unsigned long long)categoryStyleAttributesCount;
- (void)clearBusinessLinkContents;
- (void)clearCategoryStyleAttributes;

@end
