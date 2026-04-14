@class NSMutableArray, ATXPBFaceGalleryConfiguration;

@interface ATXPBFaceGalleryEvent : PBCodable <NSCopying> {
    ATXPBFaceGalleryConfiguration *_configuration;
    int _eventType;
    NSMutableArray *_items;
    struct { unsigned char eventType : 1; } _has;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
