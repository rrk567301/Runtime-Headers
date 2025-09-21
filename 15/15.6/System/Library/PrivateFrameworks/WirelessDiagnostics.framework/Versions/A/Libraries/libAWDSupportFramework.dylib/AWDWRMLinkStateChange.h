@class NSString;

@interface AWDWRMLinkStateChange : PBCodable <NSCopying> {
    struct { unsigned char mModeStateDuration : 1; unsigned char timestamp : 1; unsigned char btRssi : 1; unsigned char ccAssertion : 1; unsigned char enableCMAS : 1; unsigned char enableTelephony : 1; unsigned char isTriggeredByProximityChange : 1; unsigned char mModeState : 1; unsigned char newLinkState : 1; unsigned char oldLinkState : 1; unsigned char prevMModeState : 1; unsigned char siriApp : 1; unsigned char wifiProximity : 1; unsigned char wifiRssi : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) char hasSiriApp;
@property (nonatomic) unsigned int siriApp;
@property (nonatomic) char hasIsTriggeredByProximityChange;
@property (nonatomic) unsigned int isTriggeredByProximityChange;
@property (nonatomic) char hasOldLinkState;
@property (nonatomic) unsigned int oldLinkState;
@property (nonatomic) char hasNewLinkState;
@property (nonatomic) unsigned int newLinkState;
@property (nonatomic) char hasWifiProximity;
@property (nonatomic) unsigned int wifiProximity;
@property (nonatomic) char hasCcAssertion;
@property (nonatomic) unsigned int ccAssertion;
@property (nonatomic) char hasEnableCMAS;
@property (nonatomic) unsigned int enableCMAS;
@property (nonatomic) char hasEnableTelephony;
@property (nonatomic) unsigned int enableTelephony;
@property (nonatomic) char hasWifiRssi;
@property (nonatomic) int wifiRssi;
@property (nonatomic) char hasBtRssi;
@property (nonatomic) int btRssi;
@property (nonatomic) char hasMModeState;
@property (nonatomic) unsigned int mModeState;
@property (nonatomic) char hasMModeStateDuration;
@property (nonatomic) unsigned long long mModeStateDuration;
@property (nonatomic) char hasPrevMModeState;
@property (nonatomic) unsigned int prevMModeState;
@property (readonly, nonatomic) char hasTriggerType;
@property (retain, nonatomic) NSString *triggerType;

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
