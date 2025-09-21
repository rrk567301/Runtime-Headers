@class NSString;

@interface ATXPBSpotlightEventMetadata : PBCodable <NSCopying> {
    unsigned long long _searchEngagedActionType;
    NSString *_engagedAppString;
    NSString *_queryAtEngagement;
    NSString *_searchEngagedBundleId;
    char _didSearchDuringSession;
    struct { unsigned char searchEngagedActionType : 1; unsigned char didSearchDuringSession : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
