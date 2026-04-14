@class NSString, NSArray, NSData;

@interface _SFPBLinkPresentationCardSection : PBCodable <_SFPBLinkPresentationCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *coreSpotlightIdentifier;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSArray *peopleToBadges;
@property (nonatomic) BOOL isHighlighted;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)clearPeopleToBadge;
- (void)addPeopleToBadge:(id)a0;
- (unsigned long long)peopleToBadgeCount;
- (id)peopleToBadgeAtIndex:(unsigned long long)a0;
- (void)setPeopleToBadge:(id)a0;

@end
