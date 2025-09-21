@class NSString;

@interface ATXPBDigestOnboardingAppSelectionLoggingEvent : PBCodable <NSCopying> {
    struct { unsigned char avgNumBasicNotifications : 1; unsigned char avgNumMessageNotifications : 1; unsigned char avgNumTimeSensitiveNonMessageNotifications : 1; unsigned char rank : 1; unsigned char addedToDigest : 1; unsigned char wasShownInDigestOnboarding : 1; } _has;
}

@property (readonly, nonatomic) char hasSessionUUID;
@property (retain, nonatomic) NSString *sessionUUID;
@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) char hasAvgNumBasicNotifications;
@property (nonatomic) unsigned int avgNumBasicNotifications;
@property (nonatomic) char hasAvgNumMessageNotifications;
@property (nonatomic) unsigned int avgNumMessageNotifications;
@property (nonatomic) char hasAvgNumTimeSensitiveNonMessageNotifications;
@property (nonatomic) unsigned int avgNumTimeSensitiveNonMessageNotifications;
@property (nonatomic) char hasRank;
@property (nonatomic) unsigned int rank;
@property (nonatomic) char hasAddedToDigest;
@property (nonatomic) char addedToDigest;
@property (nonatomic) char hasWasShownInDigestOnboarding;
@property (nonatomic) char wasShownInDigestOnboarding;

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

@end
