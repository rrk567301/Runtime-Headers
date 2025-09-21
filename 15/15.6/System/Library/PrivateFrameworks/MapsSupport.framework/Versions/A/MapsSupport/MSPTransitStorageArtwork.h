@class NSString, MSPTransitStorageShield, MSPTransitStorageIcon, PBUnknownFields;
@protocol GEOTransitTextDataSource, GEOTransitShieldDataSource, GEOTransitIconDataSource;

@interface MSPTransitStorageArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char artworkSourceType : 1; unsigned char artworkUseType : 1; unsigned char hasRoutingIncidentBadge : 1; } _has;
}

@property (readonly, nonatomic) int artworkSourceType;
@property (readonly, nonatomic) int artworkUseType;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> shieldDataSource;
@property (readonly, nonatomic) id<GEOTransitIconDataSource> iconDataSource;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property (readonly, nonatomic) id<GEOTransitTextDataSource> textDataSource;
@property (readonly, nonatomic) char hasRoutingIncidentBadge;
@property (readonly, nonatomic) NSString *accessibilityText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasArtworkSourceType;
@property (nonatomic) int artworkSourceType;
@property (nonatomic) char hasArtworkUseType;
@property (nonatomic) int artworkUseType;
@property (readonly, nonatomic) char hasShield;
@property (retain, nonatomic) MSPTransitStorageShield *shield;
@property (readonly, nonatomic) char hasIcon;
@property (retain, nonatomic) MSPTransitStorageIcon *icon;
@property (readonly, nonatomic) char hasIconFallbackShield;
@property (retain, nonatomic) MSPTransitStorageShield *iconFallbackShield;
@property (nonatomic) char hasHasRoutingIncidentBadge;
@property (nonatomic) char hasRoutingIncidentBadge;
@property (readonly, nonatomic) char hasAccessibilityText;
@property (retain, nonatomic) NSString *accessibilityText;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithArtwork:(id)a0;
- (int)StringAsArtworkSourceType:(id)a0;
- (int)StringAsArtworkUseType:(id)a0;
- (id)artworkSourceTypeAsString:(int)a0;
- (id)artworkUseTypeAsString:(int)a0;

@end
