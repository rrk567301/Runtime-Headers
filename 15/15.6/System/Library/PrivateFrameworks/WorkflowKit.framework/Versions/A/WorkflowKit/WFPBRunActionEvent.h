@class NSString;

@interface WFPBRunActionEvent : PBCodable <NSCopying> {
    struct { unsigned char completed : 1; unsigned char didRunRemotely : 1; unsigned char isInvalidatedSystemAction : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasRunSource;
@property (retain, nonatomic) NSString *runSource;
@property (nonatomic) char hasCompleted;
@property (nonatomic) char completed;
@property (readonly, nonatomic) char hasActionIdentifier;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) char hasShortcutSource;
@property (retain, nonatomic) NSString *shortcutSource;
@property (readonly, nonatomic) char hasAutomationType;
@property (retain, nonatomic) NSString *automationType;
@property (nonatomic) char hasDidRunRemotely;
@property (nonatomic) char didRunRemotely;
@property (nonatomic) char hasIsInvalidatedSystemAction;
@property (nonatomic) char isInvalidatedSystemAction;
@property (readonly, nonatomic) char hasGalleryIdentifier;
@property (retain, nonatomic) NSString *galleryIdentifier;
@property (readonly, nonatomic) char hasExternalBundleIdentifier;
@property (retain, nonatomic) NSString *externalBundleIdentifier;
@property (readonly, nonatomic) char hasExternalActionIdentifier;
@property (retain, nonatomic) NSString *externalActionIdentifier;

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
