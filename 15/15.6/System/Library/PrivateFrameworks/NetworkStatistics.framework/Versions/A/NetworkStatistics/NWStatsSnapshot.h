@class NSString, NSDictionary, NSUUID;

@interface NWStatsSnapshot : NSObject {
    unsigned int _flags;
    NSDictionary *_extensionDictionaries;
}

@property (retain, nonatomic) NSString *attributedEntity;
@property (retain, nonatomic) NSString *attributedExtension;
@property (nonatomic) int attributionReason;
@property (nonatomic) int delegateAttributionReason;
@property (nonatomic) int snapshotReason;
@property (nonatomic) char firstOccurrence;
@property (retain, nonatomic) NSString *delegateName;
@property (retain, nonatomic) NSDictionary *lookupResults;
@property (nonatomic) char startAppStateIsForeground;
@property (nonatomic) char startScreenStateOn;
@property (nonatomic) char snapshotAppStateIsForeground;
@property (nonatomic) char snapshotScreenStateOn;
@property (nonatomic) char isTracker;
@property (nonatomic) char isNonAppInitiated;
@property (nonatomic) char isSilent;
@property (retain, nonatomic) NSString *domainName;
@property (retain, nonatomic) NSString *domainOwner;
@property (retain, nonatomic) NSString *domainTrackerContext;
@property (retain, nonatomic) NSString *domainAttributedBundleId;
@property (readonly, nonatomic) unsigned long long sourceIdentifier;
@property (readonly, nonatomic) char lastOccurrence;
@property (readonly, nonatomic) unsigned long long eventFlags;
@property (readonly, nonatomic) NSString *snapshotReasonString;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *euuid;
@property (readonly, nonatomic) unsigned long long eupid;
@property (readonly, nonatomic) int epid;
@property (readonly, nonatomic) int processID;
@property (readonly, nonatomic) unsigned int personaID;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) unsigned long long uniqueProcessID;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *snapshotType;
@property (readonly, nonatomic) NSString *snapshotTypeLowerCase;
@property (readonly, nonatomic) char attributedEntityIsBundleName;
@property (readonly, nonatomic) char attributedEntityIsProcessName;
@property (readonly, nonatomic) char isADaemon;
@property (readonly, nonatomic) NSString *attributionReasonString;
@property (readonly, nonatomic) NSString *delegateAttributionReasonString;
@property (retain, nonatomic) NSDictionary *extensions;

+ (void)initialize;
+ (double)_intervalWithContinuousTime:(unsigned long long)a0;
+ (double)_referenceIntervalWithContinuousTime:(unsigned long long)a0;

- (void).cxx_destruct;
- (char)changedProcname;
- (id)_createNSUUIDForBytes:(unsigned char[16])a0;
- (char)changedEUUID;
- (char)changedEUUIDFromUUID;
- (char)changedEpid;
- (char)changedOwnership;
- (char)changedPid;
- (char)changedUUID;
- (id)extensionDictionaries;
- (void)setAttribution:(id)a0 derivation:(int)a1 delegateName:(id)a2 delegateDerivation:(int)a3 extensionName:(id)a4;
- (void)setDomainName:(id)a0 owner:(id)a1 context:(id)a2 attributedBundleId:(id)a3 isTracker:(char)a4 isNonAppInitiated:(char)a5 isSilent:(char)a6;

@end
