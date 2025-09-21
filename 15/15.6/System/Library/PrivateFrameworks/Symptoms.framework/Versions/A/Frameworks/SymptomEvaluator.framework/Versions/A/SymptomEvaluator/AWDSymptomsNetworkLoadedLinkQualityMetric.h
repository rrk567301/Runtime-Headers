@class NSString;

@interface AWDSymptomsNetworkLoadedLinkQualityMetric : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char dataStalls : 1; unsigned char lQM : 1; unsigned char lastReportedRSSI : 1; unsigned char loadedLQM : 1; unsigned char networkType : 1; unsigned char isLowInternetDL : 1; unsigned char isLowInternetUL : 1; unsigned char isNetworkReliable : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasNetworkType;
@property (nonatomic) int networkType;
@property (readonly, nonatomic) char hasNetworkAttachmentLabel;
@property (retain, nonatomic) NSString *networkAttachmentLabel;
@property (nonatomic) char hasLoadedLQM;
@property (nonatomic) int loadedLQM;
@property (nonatomic) char hasLQM;
@property (nonatomic) int lQM;
@property (readonly, nonatomic) char hasRadioAccessTechnology;
@property (retain, nonatomic) NSString *radioAccessTechnology;
@property (nonatomic) char hasIsNetworkReliable;
@property (nonatomic) char isNetworkReliable;
@property (nonatomic) char hasDataStalls;
@property (nonatomic) unsigned int dataStalls;
@property (nonatomic) char hasLastReportedRSSI;
@property (nonatomic) int lastReportedRSSI;
@property (nonatomic) char hasIsLowInternetUL;
@property (nonatomic) char isLowInternetUL;
@property (nonatomic) char hasIsLowInternetDL;
@property (nonatomic) char isLowInternetDL;

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
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;

@end
