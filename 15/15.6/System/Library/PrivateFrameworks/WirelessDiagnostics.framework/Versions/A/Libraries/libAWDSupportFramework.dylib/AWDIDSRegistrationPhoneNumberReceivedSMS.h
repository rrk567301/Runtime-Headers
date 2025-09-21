@class NSString;

@interface AWDIDSRegistrationPhoneNumberReceivedSMS : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char smsRoundTripDuration : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) char hasSmsRoundTripDuration;
@property (nonatomic) unsigned int smsRoundTripDuration;

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
