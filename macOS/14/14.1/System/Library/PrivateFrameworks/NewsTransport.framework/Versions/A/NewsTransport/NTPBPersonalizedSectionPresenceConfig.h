@class NTPBRelativePersonalizedSectionPresenceConfig, NTPBAbsolutePersonalizedSectionPresenceConfig;

@interface NTPBPersonalizedSectionPresenceConfig : PBCodable <NSCopying> {
    struct { unsigned char personalizationMethod : 1; } _has;
}

@property (nonatomic) BOOL hasPersonalizationMethod;
@property (nonatomic) int personalizationMethod;
@property (readonly, nonatomic) BOOL hasRelativeConfig;
@property (retain, nonatomic) NTPBRelativePersonalizedSectionPresenceConfig *relativeConfig;
@property (readonly, nonatomic) BOOL hasAbsoluteConfig;
@property (retain, nonatomic) NTPBAbsolutePersonalizedSectionPresenceConfig *absoluteConfig;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
