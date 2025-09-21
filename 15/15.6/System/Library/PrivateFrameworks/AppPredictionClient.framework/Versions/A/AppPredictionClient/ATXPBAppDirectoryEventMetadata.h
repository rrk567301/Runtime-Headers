@interface ATXPBAppDirectoryEventMetadata : PBCodable <NSCopying> {
    char _bundleIdInTopAppsVisible;
    char _userLaunchedAppBeforeLeaving;
    struct { unsigned char bundleIdInTopAppsVisible : 1; unsigned char userLaunchedAppBeforeLeaving : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
