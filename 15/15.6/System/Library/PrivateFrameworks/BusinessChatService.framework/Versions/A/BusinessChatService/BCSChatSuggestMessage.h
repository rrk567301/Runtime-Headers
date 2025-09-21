@class NSString, NSMutableArray;

@interface BCSChatSuggestMessage : PBCodable <NSCopying> {
    struct { unsigned char phoneHash : 1; unsigned char isVerified : 1; } _has;
}

@property (nonatomic) char hasPhoneHash;
@property (nonatomic) long long phoneHash;
@property (readonly, nonatomic) char hasBizId;
@property (retain, nonatomic) NSString *bizId;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *chatOpenHours;
@property (retain, nonatomic) NSMutableArray *phoneOpenHours;
@property (readonly, nonatomic) char hasTimeZone;
@property (retain, nonatomic) NSString *timeZone;
@property (readonly, nonatomic) char hasSquareLogoUrl;
@property (retain, nonatomic) NSString *squareLogoUrl;
@property (readonly, nonatomic) char hasWideLogoUrl;
@property (retain, nonatomic) NSString *wideLogoUrl;
@property (readonly, nonatomic) char hasBackgroundColor;
@property (retain, nonatomic) NSString *backgroundColor;
@property (readonly, nonatomic) char hasTintColor;
@property (retain, nonatomic) NSString *tintColor;
@property (nonatomic) char hasIsVerified;
@property (nonatomic) char isVerified;
@property (retain, nonatomic) NSMutableArray *callToActions;
@property (retain, nonatomic) NSMutableArray *visibilities;
@property (readonly, nonatomic) char hasIntentId;
@property (retain, nonatomic) NSString *intentId;
@property (readonly, nonatomic) char hasGroup;
@property (retain, nonatomic) NSString *group;

+ (Class)callToActionsType;
+ (Class)chatOpenHoursType;
+ (Class)phoneOpenHoursType;
+ (Class)visibilitiesType;

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
- (void)addCallToActions:(id)a0;
- (void)addChatOpenHours:(id)a0;
- (void)addPhoneOpenHours:(id)a0;
- (void)addVisibilities:(id)a0;
- (id)callToActionsAtIndex:(unsigned long long)a0;
- (unsigned long long)callToActionsCount;
- (id)chatOpenHoursAtIndex:(unsigned long long)a0;
- (unsigned long long)chatOpenHoursCount;
- (void)clearCallToActions;
- (void)clearChatOpenHours;
- (void)clearPhoneOpenHours;
- (void)clearVisibilities;
- (id)phoneOpenHoursAtIndex:(unsigned long long)a0;
- (unsigned long long)phoneOpenHoursCount;
- (id)visibilitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)visibilitiesCount;

@end
