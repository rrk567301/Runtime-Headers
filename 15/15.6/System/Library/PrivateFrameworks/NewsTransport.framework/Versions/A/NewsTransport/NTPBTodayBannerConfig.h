@class NSString, NTPBColorGradientPair, NTPBColorPair;

@interface NTPBTodayBannerConfig : PBCodable <NSCopying> {
    struct { unsigned char daysVisibleToNewSubscribers : 1; unsigned char numberOfAppearancesToHide : 1; unsigned char numberOfTapsToHide : 1; unsigned char backgroundMethod : 1; unsigned char imageMethod : 1; unsigned char isEnabled : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasBody;
@property (retain, nonatomic) NSString *body;
@property (readonly, nonatomic) char hasActionURL;
@property (retain, nonatomic) NSString *actionURL;
@property (readonly, nonatomic) char hasActionButtonText;
@property (retain, nonatomic) NSString *actionButtonText;
@property (nonatomic) char hasImageMethod;
@property (nonatomic) int imageMethod;
@property (readonly, nonatomic) char hasImageURL;
@property (retain, nonatomic) NSString *imageURL;
@property (nonatomic) char hasBackgroundMethod;
@property (nonatomic) int backgroundMethod;
@property (readonly, nonatomic) char hasSolidBackgroundColorPair;
@property (retain, nonatomic) NTPBColorPair *solidBackgroundColorPair;
@property (readonly, nonatomic) char hasGradientBackgroundPair;
@property (retain, nonatomic) NTPBColorGradientPair *gradientBackgroundPair;
@property (nonatomic) char hasNumberOfAppearancesToHide;
@property (nonatomic) unsigned long long numberOfAppearancesToHide;
@property (nonatomic) char hasNumberOfTapsToHide;
@property (nonatomic) unsigned long long numberOfTapsToHide;
@property (nonatomic) char hasDaysVisibleToNewSubscribers;
@property (nonatomic) unsigned long long daysVisibleToNewSubscribers;
@property (nonatomic) char hasIsEnabled;
@property (nonatomic) char isEnabled;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
