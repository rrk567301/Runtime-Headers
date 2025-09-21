@class NSString;

@interface AWDCFNetworkStreamTaskTiming : PBCodable <NSCopying> {
    struct { unsigned char connectEnd : 1; unsigned char connectStart : 1; unsigned char connected : 1; unsigned char connectionInit : 1; unsigned char domainLookupEnd : 1; unsigned char domainLookupStart : 1; unsigned char firstRead : 1; unsigned char firstWrite : 1; unsigned char isCellular : 1; unsigned char resumeStart : 1; unsigned char secureConnectionStart : 1; unsigned char taskCreationStart : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasTaskCreationStart;
@property (nonatomic) unsigned long long taskCreationStart;
@property (nonatomic) char hasResumeStart;
@property (nonatomic) unsigned long long resumeStart;
@property (nonatomic) char hasConnectionInit;
@property (nonatomic) unsigned long long connectionInit;
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
@property (nonatomic) char hasConnected;
@property (nonatomic) unsigned long long connected;
@property (nonatomic) char hasFirstWrite;
@property (nonatomic) unsigned long long firstWrite;
@property (nonatomic) char hasFirstRead;
@property (nonatomic) unsigned long long firstRead;
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
