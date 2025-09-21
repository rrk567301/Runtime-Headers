@class NSString, NSMutableArray;

@interface PPStorableFeedback : PBCodable <NSCopying> {
    struct { unsigned char secondsFrom1970 : 1; unsigned char storeType : 1; unsigned char isMapped : 1; } _has;
}

@property (nonatomic) char hasSecondsFrom1970;
@property (nonatomic) double secondsFrom1970;
@property (nonatomic) char hasStoreType;
@property (nonatomic) unsigned int storeType;
@property (readonly, nonatomic) char hasClientBundleIdentifier;
@property (retain, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, nonatomic) char hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) char hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (nonatomic) char hasIsMapped;
@property (nonatomic) char isMapped;
@property (readonly, nonatomic) char hasBuild;
@property (retain, nonatomic) NSString *build;
@property (retain, nonatomic) NSMutableArray *feedbackItems;

+ (Class)feedbackItemsType;

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
- (void)addFeedbackItems:(id)a0;
- (void)clearFeedbackItems;
- (id)feedbackItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)feedbackItemsCount;

@end
