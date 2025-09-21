@class NSData;

@interface AWDWiFiBlacklistingEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char blacklistedDuration : 1; unsigned char blacklistedReason : 1; unsigned char blacklistedSubreason : 1; unsigned char networkFlags : 1; unsigned char securityType : 1; unsigned char unblacklistingReason : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasOui;
@property (retain, nonatomic) NSData *oui;
@property (nonatomic) BOOL hasNetworkFlags;
@property (nonatomic) unsigned int networkFlags;
@property (nonatomic) BOOL hasSecurityType;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) BOOL hasBlacklistedReason;
@property (nonatomic) unsigned int blacklistedReason;
@property (nonatomic) BOOL hasBlacklistedSubreason;
@property (nonatomic) unsigned int blacklistedSubreason;
@property (nonatomic) BOOL hasBlacklistedDuration;
@property (nonatomic) unsigned int blacklistedDuration;
@property (nonatomic) BOOL hasUnblacklistingReason;
@property (nonatomic) unsigned int unblacklistingReason;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
