@class AWDNWActivity, AWDNWL2Report, AWDNWDeviceReport;

@interface AWDNWActivityEpilogue : PBCodable <NSCopying> {
    struct { unsigned char durationMsecs : 1; unsigned char fragmentsQuenched : 1; unsigned char timestamp : 1; unsigned char completionReason : 1; unsigned char underlyingErrorCode : 1; unsigned char underlyingErrorDomain : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasActivity;
@property (retain, nonatomic) AWDNWActivity *activity;
@property (nonatomic) char hasDurationMsecs;
@property (nonatomic) unsigned long long durationMsecs;
@property (nonatomic) char hasFragmentsQuenched;
@property (nonatomic) unsigned long long fragmentsQuenched;
@property (nonatomic) char hasCompletionReason;
@property (nonatomic) int completionReason;
@property (readonly, nonatomic) char hasL2Report;
@property (retain, nonatomic) AWDNWL2Report *l2Report;
@property (readonly, nonatomic) char hasDeviceReport;
@property (retain, nonatomic) AWDNWDeviceReport *deviceReport;
@property (nonatomic) char hasUnderlyingErrorDomain;
@property (nonatomic) int underlyingErrorDomain;
@property (nonatomic) char hasUnderlyingErrorCode;
@property (nonatomic) int underlyingErrorCode;

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
- (int)StringAsCompletionReason:(id)a0;
- (id)completionReasonAsString:(int)a0;

@end
