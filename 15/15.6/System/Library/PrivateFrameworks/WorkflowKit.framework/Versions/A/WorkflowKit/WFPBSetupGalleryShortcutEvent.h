@class NSString;

@interface WFPBSetupGalleryShortcutEvent : PBCodable <NSCopying> {
    struct { unsigned char completed : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasGalleryCategoryIdentifier;
@property (retain, nonatomic) NSString *galleryCategoryIdentifier;
@property (readonly, nonatomic) char hasGalleryIdentifier;
@property (retain, nonatomic) NSString *galleryIdentifier;
@property (readonly, nonatomic) char hasAddToSiriBundleIdentifier;
@property (retain, nonatomic) NSString *addToSiriBundleIdentifier;
@property (nonatomic) char hasCompleted;
@property (nonatomic) char completed;

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

@end
