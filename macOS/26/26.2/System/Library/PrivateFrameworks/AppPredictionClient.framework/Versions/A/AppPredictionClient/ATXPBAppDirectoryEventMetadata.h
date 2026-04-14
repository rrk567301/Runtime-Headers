@interface ATXPBAppDirectoryEventMetadata : PBCodable <NSCopying> {
    BOOL _bundleIdInTopAppsVisible;
    BOOL _userLaunchedAppBeforeLeaving;
    struct { unsigned char bundleIdInTopAppsVisible : 1; unsigned char userLaunchedAppBeforeLeaving : 1; } _has;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
