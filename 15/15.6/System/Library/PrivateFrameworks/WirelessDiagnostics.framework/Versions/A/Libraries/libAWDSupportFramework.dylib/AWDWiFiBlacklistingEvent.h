@class NSData;

@interface AWDWiFiBlacklistingEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char blacklistedDuration : 1; unsigned char blacklistedReason : 1; unsigned char blacklistedSubreason : 1; unsigned char networkFlags : 1; unsigned char securityType : 1; unsigned char unblacklistingReason : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasOui;
@property (retain, nonatomic) NSData *oui;
@property (nonatomic) char hasNetworkFlags;
@property (nonatomic) unsigned int networkFlags;
@property (nonatomic) char hasSecurityType;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) char hasBlacklistedReason;
@property (nonatomic) unsigned int blacklistedReason;
@property (nonatomic) char hasBlacklistedSubreason;
@property (nonatomic) unsigned int blacklistedSubreason;
@property (nonatomic) char hasBlacklistedDuration;
@property (nonatomic) unsigned int blacklistedDuration;
@property (nonatomic) char hasUnblacklistingReason;
@property (nonatomic) unsigned int unblacklistingReason;

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
