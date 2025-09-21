@class NSString;

@interface AWDCFNetworkW3CNavigationTiming : PBCodable <NSCopying> {
    struct { unsigned char connectEnd : 1; unsigned char connectStart : 1; unsigned char domainLookupEnd : 1; unsigned char domainLookupStart : 1; unsigned char fetchStart : 1; unsigned char isCellular : 1; unsigned char isReused : 1; unsigned char redirectCount : 1; unsigned char redirectCountW3C : 1; unsigned char redirectEnd : 1; unsigned char redirectStart : 1; unsigned char requestStart : 1; unsigned char responseEnd : 1; unsigned char responseStart : 1; unsigned char secureConnectionStart : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasRedirectStart;
@property (nonatomic) unsigned long long redirectStart;
@property (nonatomic) char hasRedirectEnd;
@property (nonatomic) unsigned long long redirectEnd;
@property (nonatomic) char hasFetchStart;
@property (nonatomic) unsigned long long fetchStart;
@property (nonatomic) char hasDomainLookupStart;
@property (nonatomic) unsigned long long domainLookupStart;
@property (nonatomic) char hasDomainLookupEnd;
@property (nonatomic) unsigned long long domainLookupEnd;
@property (nonatomic) char hasConnectStart;
@property (nonatomic) unsigned long long connectStart;
@property (nonatomic) char hasSecureConnectionStart;
@property (nonatomic) unsigned long long secureConnectionStart;
@property (nonatomic) char hasConnectEnd;
@property (nonatomic) unsigned long long connectEnd;
@property (nonatomic) char hasRequestStart;
@property (nonatomic) unsigned long long requestStart;
@property (nonatomic) char hasResponseStart;
@property (nonatomic) unsigned long long responseStart;
@property (nonatomic) char hasResponseEnd;
@property (nonatomic) unsigned long long responseEnd;
@property (nonatomic) char hasRedirectCountW3C;
@property (nonatomic) long long redirectCountW3C;
@property (nonatomic) char hasRedirectCount;
@property (nonatomic) long long redirectCount;
@property (nonatomic) char hasIsReused;
@property (nonatomic) long long isReused;
@property (readonly, nonatomic) char hasHostname;
@property (retain, nonatomic) NSString *hostname;
@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) char hasIsCellular;
@property (nonatomic) long long isCellular;
@property (readonly, nonatomic) char hasProcname;
@property (retain, nonatomic) NSString *procname;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
