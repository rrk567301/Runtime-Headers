@class NSString, BCAnnotationRange, NSData;

@interface BCProtoAnnotation : PBCodable <NSCopying> {
    struct { unsigned char locationModificationDate : 1; unsigned char userModificationDate : 1; unsigned char plAbsolutePhysicalLocation : 1; unsigned char plLocationRangeEnd : 1; unsigned char plLocationRangeStart : 1; unsigned char readingProgress : 1; unsigned char readingProgressHighWaterMark : 1; unsigned char style : 1; unsigned char type : 1; unsigned char deleted : 1; unsigned char isUnderline : 1; unsigned char spineIndexUpdated : 1; } _has;
}

@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *creatorIdentifier;
@property (nonatomic) char hasDeleted;
@property (nonatomic) char deleted;
@property (nonatomic) char hasIsUnderline;
@property (nonatomic) char isUnderline;
@property (readonly, nonatomic) char hasLocationCFIString;
@property (retain, nonatomic) NSString *locationCFIString;
@property (nonatomic) double modificationDate;
@property (readonly, nonatomic) char hasNote;
@property (retain, nonatomic) NSString *note;
@property (readonly, nonatomic) char hasRepresentativeText;
@property (retain, nonatomic) NSString *representativeText;
@property (readonly, nonatomic) char hasSelectedText;
@property (retain, nonatomic) NSString *selectedText;
@property (nonatomic) char hasStyle;
@property (nonatomic) unsigned int style;
@property (nonatomic) char hasType;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasPhysicalPageNumber;
@property (retain, nonatomic) NSString *physicalPageNumber;
@property (readonly, nonatomic) char hasAnnotationVersion;
@property (retain, nonatomic) NSString *annotationVersion;
@property (readonly, nonatomic) char hasAssetVersion;
@property (retain, nonatomic) NSString *assetVersion;
@property (readonly, nonatomic) char hasAttachments;
@property (retain, nonatomic) NSString *attachments;
@property (readonly, nonatomic) char hasChapterTitle;
@property (retain, nonatomic) NSString *chapterTitle;
@property (nonatomic) char hasUserModificationDate;
@property (nonatomic) double userModificationDate;
@property (readonly, nonatomic) char hasSelectedTextRange;
@property (retain, nonatomic) BCAnnotationRange *selectedTextRange;
@property (nonatomic) char hasReadingProgressHighWaterMark;
@property (nonatomic) float readingProgressHighWaterMark;
@property (nonatomic) char hasSpineIndexUpdated;
@property (nonatomic) char spineIndexUpdated;
@property (nonatomic) char hasReadingProgress;
@property (nonatomic) float readingProgress;
@property (readonly, nonatomic) char hasFutureProofing11;
@property (retain, nonatomic) NSString *futureProofing11;
@property (readonly, nonatomic) char hasFutureProofing12;
@property (retain, nonatomic) NSString *futureProofing12;
@property (nonatomic) char hasPlAbsolutePhysicalLocation;
@property (nonatomic) int plAbsolutePhysicalLocation;
@property (nonatomic) char hasPlLocationRangeEnd;
@property (nonatomic) int plLocationRangeEnd;
@property (nonatomic) char hasPlLocationRangeStart;
@property (nonatomic) int plLocationRangeStart;
@property (readonly, nonatomic) char hasPlLocationStorageUUID;
@property (retain, nonatomic) NSString *plLocationStorageUUID;
@property (readonly, nonatomic) char hasPlUserData;
@property (retain, nonatomic) NSData *plUserData;
@property (nonatomic) char hasLocationModificationDate;
@property (nonatomic) double locationModificationDate;

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
