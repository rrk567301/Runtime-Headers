@class NSString;

@interface WFPBShareShortcutEvent : PBCodable <NSCopying> {
    struct { unsigned char actionCount : 1; unsigned char source : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (nonatomic) char hasActionCount;
@property (nonatomic) unsigned int actionCount;
@property (readonly, nonatomic) char hasAddToSiriBundleIdentifier;
@property (retain, nonatomic) NSString *addToSiriBundleIdentifier;
@property (readonly, nonatomic) char hasGalleryIdentifier;
@property (retain, nonatomic) NSString *galleryIdentifier;
@property (readonly, nonatomic) char hasSharingDestinationBundleIdentifier;
@property (retain, nonatomic) NSString *sharingDestinationBundleIdentifier;
@property (readonly, nonatomic) char hasSharingMode;
@property (retain, nonatomic) NSString *sharingMode;

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
- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;

@end
