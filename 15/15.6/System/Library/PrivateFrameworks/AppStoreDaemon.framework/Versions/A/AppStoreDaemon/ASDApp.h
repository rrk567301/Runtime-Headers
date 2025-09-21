@class NSData, NSString, NSError, NSDate, NSUUID, ASDProgress, NSDictionary, NSProgress, NSNumber, ASDUnfairLock;

@interface ASDApp : NSObject <NSCopying, NSSecureCoding> {
    char _hasFetchedUpdateMetadata;
    ASDUnfairLock *_propertyLock;
    unsigned char _openableStatus;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *artistName;
@property (nonatomic) char autoUpdateEnabled;
@property (retain) NSString *bundlePath;
@property (retain) NSString *bundleShortVersion;
@property (retain) NSString *bundleVersion;
@property (retain) NSString *executablePath;
@property (retain) NSError *installError;
@property (retain) NSString *localizedName;
@property long long softwarePlatform;
@property long long storeExternalVersionID;
@property long long storeItemID;
@property (retain) NSString *storeCohort;
@property (retain) NSNumber *storeFront;
@property long long downloaderDSID;
@property long long familyID;
@property long long purchaserDSID;
@property long long extensions;
@property long long status;
@property long long essentialBackgroundAssetDownloadEstimate;
@property char hasPostProcessing;
@property (retain) NSProgress *progress;
@property (retain) NSProgress *downloadProgress;
@property (retain) NSProgress *installProgress;
@property (retain) NSProgress *postProcessProgress;
@property long long progressPhase;
@property (retain) ASDProgress *remoteProgress;
@property (retain) NSData *rawUpdateData;
@property (retain) NSString *updateBuyParams;
@property (retain) NSDate *updateInstallDate;
@property (retain) NSDictionary *updateMetadata;
@property long long watchApplicationMode;
@property (readonly) NSString *bundleID;
@property (readonly, getter=hasMessagesExtension) char messasgesExtension;
@property (readonly, getter=hasUnknownDistributor) char hasUnknownDistributor;
@property (readonly, getter=isAppClip) char appClip;
@property (readonly, getter=isArcadeOpenable) char arcadeOpenable;
@property (readonly, getter=isBetaApp) char betaApp;
@property (readonly, getter=isFamilyShared) char familyShared;
@property (readonly, getter=isInstalled) char installed;
@property (readonly, getter=isLaunchProhibited) char launchProhibited;
@property (readonly, getter=isManaged) char managed;
@property (readonly, getter=isOcelot) char ocelot;
@property (readonly, getter=isOpenable) char openable;
@property (readonly, getter=isPlaceholder) char placeholder;
@property (readonly, getter=isStoreApp) char storeApp;
@property (readonly, getter=isSystemApp) char systemApp;
@property (readonly, getter=isWrapped) char wrapped;
@property (readonly) NSUUID *installID;
@property (readonly, getter=isUpdateAvailable) char updateAvailable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0;
- (char)isEqualToApp:(id)a0;
- (void)loadUpdateMetadataIfNecessary;

@end
