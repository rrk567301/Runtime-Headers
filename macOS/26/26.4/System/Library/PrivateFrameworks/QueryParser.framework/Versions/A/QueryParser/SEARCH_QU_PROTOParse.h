@class SEARCH_QU_PROTOStringOrListOfString;

@interface SEARCH_QU_PROTOParse : PBCodable <NSCopying> {
    struct { unsigned char appEntityStatus : 1; unsigned char containsType : 1; unsigned char filterType : 1; unsigned char orderByTime : 1; unsigned char preferredType : 1; unsigned char sourceType : 1; unsigned char temporalReference : 1; unsigned char describe : 1; unsigned char personIsMe : 1; unsigned char pickOne : 1; unsigned char receiverIsMe : 1; unsigned char senderIsMe : 1; } _has;
}

@property (nonatomic) BOOL hasAppEntityStatus;
@property (nonatomic) int appEntityStatus;
@property (nonatomic) BOOL hasDescribe;
@property (nonatomic) BOOL describe;
@property (nonatomic) BOOL hasFilterType;
@property (nonatomic) int filterType;
@property (nonatomic) BOOL hasSourceType;
@property (nonatomic) int sourceType;
@property (nonatomic) BOOL hasPreferredType;
@property (nonatomic) int preferredType;
@property (nonatomic) BOOL hasContainsType;
@property (nonatomic) int containsType;
@property (nonatomic) BOOL hasOrderByTime;
@property (nonatomic) int orderByTime;
@property (nonatomic) BOOL hasPickOne;
@property (nonatomic) BOOL pickOne;
@property (nonatomic) BOOL hasTemporalReference;
@property (nonatomic) int temporalReference;
@property (nonatomic) BOOL hasPersonIsMe;
@property (nonatomic) BOOL personIsMe;
@property (nonatomic) BOOL hasSenderIsMe;
@property (nonatomic) BOOL senderIsMe;
@property (nonatomic) BOOL hasReceiverIsMe;
@property (nonatomic) BOOL receiverIsMe;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) SEARCH_QU_PROTOStringOrListOfString *location;
@property (readonly, nonatomic) BOOL hasLocationArrival;
@property (retain, nonatomic) SEARCH_QU_PROTOStringOrListOfString *locationArrival;
@property (readonly, nonatomic) BOOL hasLocationDeparture;
@property (retain, nonatomic) SEARCH_QU_PROTOStringOrListOfString *locationDeparture;
@property (readonly, nonatomic) BOOL hasTime;
@property (retain, nonatomic) SEARCH_QU_PROTOStringOrListOfString *time;
@property (readonly, nonatomic) BOOL hasMessageTime;
@property (retain, nonatomic) SEARCH_QU_PROTOStringOrListOfString *messageTime;
@property (readonly, nonatomic) BOOL hasPerson;
@property (retain, nonatomic) SEARCH_QU_PROTOStringOrListOfString *person;
@property (readonly, nonatomic) BOOL hasSender;
@property (retain, nonatomic) SEARCH_QU_PROTOStringOrListOfString *sender;
@property (readonly, nonatomic) BOOL hasReceiver;
@property (retain, nonatomic) SEARCH_QU_PROTOStringOrListOfString *receiver;
@property (readonly, nonatomic) BOOL hasTagName;
@property (retain, nonatomic) SEARCH_QU_PROTOStringOrListOfString *tagName;
@property (readonly, nonatomic) BOOL hasSearchTerm;
@property (retain, nonatomic) SEARCH_QU_PROTOStringOrListOfString *searchTerm;

+ (id)fromJsonString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsSourceType:(id)a0;
- (id)sourceTypeAsString:(int)a0;
- (id)toJsonString;
- (void)postProcess;
- (int)StringAsAppEntityStatus:(id)a0;
- (int)StringAsFilterType:(id)a0;
- (int)StringAsPreferredType:(id)a0;
- (int)StringAsTemporalReference:(id)a0;
- (int)StringAsContainsType:(id)a0;
- (int)StringAsOrderByTime:(id)a0;
- (id)appEntityStatusAsString:(int)a0;
- (id)containsTypeAsString:(int)a0;
- (id)filterTypeAsString:(int)a0;
- (id)orderByTimeAsString:(int)a0;
- (id)preferredTypeAsString:(int)a0;
- (id)temporalReferenceAsString:(int)a0;

@end
