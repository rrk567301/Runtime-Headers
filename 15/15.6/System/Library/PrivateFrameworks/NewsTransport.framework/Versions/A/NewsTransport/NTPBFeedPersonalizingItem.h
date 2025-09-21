@class NSString, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, NSData, NSMutableArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList;

@interface NTPBFeedPersonalizingItem : PBCodable <NSCopying> {
    struct { unsigned char bodyTextLength : 1; unsigned char publishDateMilliseconds : 1; unsigned char hasAudioTrack : 1; unsigned char hasVideo : 1; unsigned char isAIGenerated : 1; unsigned char isANF : 1; unsigned char isBundlePaid : 1; unsigned char isFeatured : 1; unsigned char isPaid : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *topicIDs;
@property (readonly, nonatomic) char hasPublisherID;
@property (retain, nonatomic) NSString *publisherID;
@property (nonatomic) char hasBodyTextLength;
@property (nonatomic) long long bodyTextLength;
@property (nonatomic) char hasHasAudioTrack;
@property (nonatomic) char hasAudioTrack;
@property (nonatomic) char hasIsFeatured;
@property (nonatomic) char isFeatured;
@property (nonatomic) char hasIsANF;
@property (nonatomic) char isANF;
@property (nonatomic) char hasIsPaid;
@property (nonatomic) char isPaid;
@property (nonatomic) char hasIsBundlePaid;
@property (nonatomic) char isBundlePaid;
@property (nonatomic) char hasHasVideo;
@property (nonatomic) char hasVideo;
@property (nonatomic) char hasIsAIGenerated;
@property (nonatomic) char isAIGenerated;
@property (readonly, nonatomic) char hasGlobalCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) char hasPublisherCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (readonly, nonatomic) char hasGlobalConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
@property (readonly, nonatomic) char hasPublisherConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) char hasPublishDateMilliseconds;
@property (nonatomic) unsigned long long publishDateMilliseconds;
@property (readonly, nonatomic) char hasPublisherTagMetadata;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata;
@property (readonly, nonatomic) char hasFloat16TitleEncoding;
@property (retain, nonatomic) NSData *float16TitleEncoding;
@property (readonly, nonatomic) char hasFloat16FullBodyEncoding;
@property (retain, nonatomic) NSData *float16FullBodyEncoding;

+ (Class)topicsType;
+ (Class)topicIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTopics:(id)a0;
- (void)clearTopics;
- (id)topicsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicsCount;
- (void)addTopicIDs:(id)a0;
- (void)clearTopicIDs;
- (id)topicIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicIDsCount;

@end
