@class NSString, NTPBRecordBase, NTPBDate, NSMutableArray;

@interface NTPBPuzzleRecord : PBCodable <NSCopying> {
    struct { unsigned char behaviorFlags : 1; unsigned char difficultyLevel : 1; unsigned char minimumNewsVersion : 1; unsigned char isDeprecated : 1; unsigned char isDraft : 1; unsigned char isPaid : 1; } _has;
}

@property (readonly, nonatomic) char hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasPuzzleDescription;
@property (retain, nonatomic) NSString *puzzleDescription;
@property (readonly, nonatomic) char hasPuzzleTypeID;
@property (retain, nonatomic) NSString *puzzleTypeID;
@property (readonly, nonatomic) char hasDataResourceID;
@property (retain, nonatomic) NSString *dataResourceID;
@property (retain, nonatomic) NSMutableArray *authors;
@property (nonatomic) char hasIsPaid;
@property (nonatomic) char isPaid;
@property (readonly, nonatomic) char hasPublishedDate;
@property (retain, nonatomic) NTPBDate *publishedDate;
@property (nonatomic) char hasDifficultyLevel;
@property (nonatomic) long long difficultyLevel;
@property (readonly, nonatomic) char hasThumbnailImageCompactURL;
@property (retain, nonatomic) NSString *thumbnailImageCompactURL;
@property (readonly, nonatomic) char hasThumbnailImageLargeURL;
@property (retain, nonatomic) NSString *thumbnailImageLargeURL;
@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSMutableArray *blockedStorefrontIDs;
@property (retain, nonatomic) NSMutableArray *allowedStorefrontIDs;
@property (nonatomic) char hasMinimumNewsVersion;
@property (nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) char hasTeaserConfiguration;
@property (retain, nonatomic) NSString *teaserConfiguration;
@property (readonly, nonatomic) char hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) char hasBehaviorFlags;
@property (nonatomic) long long behaviorFlags;
@property (nonatomic) char hasIsDeprecated;
@property (nonatomic) char isDeprecated;
@property (nonatomic) char hasIsDraft;
@property (nonatomic) char isDraft;
@property (retain, nonatomic) NSMutableArray *relatedPuzzleIDs;

+ (Class)allowedStorefrontIDsType;
+ (Class)authorsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)relatedPuzzleIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)authorsAtIndex:(unsigned long long)a0;
- (void)addAllowedStorefrontIDs:(id)a0;
- (void)addAuthors:(id)a0;
- (void)addBlockedStorefrontIDs:(id)a0;
- (void)addRelatedPuzzleIDs:(id)a0;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)allowedStorefrontIDsCount;
- (unsigned long long)authorsCount;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)blockedStorefrontIDsCount;
- (void)clearAllowedStorefrontIDs;
- (void)clearAuthors;
- (void)clearBlockedStorefrontIDs;
- (void)clearRelatedPuzzleIDs;
- (id)relatedPuzzleIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)relatedPuzzleIDsCount;

@end
