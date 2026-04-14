@class NSString;

@interface ATXPBSpotlightEventMetadata : PBCodable <NSCopying> {
    unsigned long long _searchEngagedActionType;
    NSString *_engagedAppString;
    NSString *_queryAtEngagement;
    NSString *_searchEngagedBundleId;
    BOOL _didSearchDuringSession;
    struct { unsigned char searchEngagedActionType : 1; unsigned char didSearchDuringSession : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
