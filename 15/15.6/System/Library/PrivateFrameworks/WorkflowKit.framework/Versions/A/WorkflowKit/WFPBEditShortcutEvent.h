@class NSString;

@interface WFPBEditShortcutEvent : PBCodable <NSCopying> {
    struct { unsigned char actionCount : 1; unsigned char numberOfEngagedSuggestions : 1; unsigned char numberOfManuallyAddedActions : 1; unsigned char numberOfRejectedSuggestions : 1; unsigned char numberOfShownSuggestions : 1; unsigned char startingActionCount : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasActionCount;
@property (nonatomic) unsigned int actionCount;
@property (readonly, nonatomic) char hasAddToSiriBundleIdentifier;
@property (retain, nonatomic) NSString *addToSiriBundleIdentifier;
@property (readonly, nonatomic) char hasGalleryIdentifier;
@property (retain, nonatomic) NSString *galleryIdentifier;
@property (readonly, nonatomic) char hasShortcutSource;
@property (retain, nonatomic) NSString *shortcutSource;
@property (nonatomic) char hasNumberOfShownSuggestions;
@property (nonatomic) unsigned int numberOfShownSuggestions;
@property (nonatomic) char hasNumberOfEngagedSuggestions;
@property (nonatomic) unsigned int numberOfEngagedSuggestions;
@property (nonatomic) char hasNumberOfRejectedSuggestions;
@property (nonatomic) unsigned int numberOfRejectedSuggestions;
@property (nonatomic) char hasNumberOfManuallyAddedActions;
@property (nonatomic) unsigned int numberOfManuallyAddedActions;
@property (nonatomic) char hasStartingActionCount;
@property (nonatomic) unsigned int startingActionCount;

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
