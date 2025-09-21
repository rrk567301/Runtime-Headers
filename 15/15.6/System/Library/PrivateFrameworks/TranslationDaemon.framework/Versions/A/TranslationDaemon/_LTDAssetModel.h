@class NSString, NSArray, NSURL, _LTAssetProgress, NSObject;
@protocol _LTDAssetModelProtocol;

@interface _LTDAssetModel : NSObject <_LTDAssetModelProtocol> {
    NSArray *_localeIdentifiers;
}

@property (retain, nonatomic) NSObject<_LTDAssetModelProtocol> *provider;
@property (readonly, nonatomic) unsigned long long downloadPriority;
@property (readonly, nonatomic) char shouldPurgeWithLocale;
@property (readonly, nonatomic) char isMultiLocaleAsset;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *assetId;
@property (readonly, nonatomic) NSString *assetName;
@property (readonly, nonatomic) NSString *coreAssetName;
@property (readonly, nonatomic) NSString *assetTypeName;
@property (readonly, nonatomic) unsigned long long assetType;
@property (readonly, nonatomic) NSString *managedAssetType;
@property (readonly, nonatomic) long long assetVersion;
@property (readonly, nonatomic) NSString *assetBuild;
@property (readonly, nonatomic) long long formatVersion;
@property (readonly, nonatomic) long long contentVersion;
@property (readonly, nonatomic) NSURL *getLocalFileUrl;
@property (readonly, nonatomic) long long downloadSize;
@property (readonly, nonatomic) long long unarchivedSize;
@property (readonly, nonatomic) char isPremiumTextLID;
@property (readonly, nonatomic) long long requiredCapabilityIdentifier;
@property (readonly, nonatomic) NSString *assetLanguage;
@property (readonly, nonatomic) NSArray *supportedLanguages;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) char isAvailable;
@property (readonly, nonatomic) char isDownloading;
@property (readonly, nonatomic) char isInstalled;
@property (readonly, nonatomic) char canBePurged;
@property (readonly, nonatomic) _LTAssetProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionForAssetState:(unsigned long long)a0;
+ (id)localeIdentifiersForLanguageName:(id)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEmpty;
- (id)initWithProvider:(id)a0;
- (id)status;
- (char)refreshState;
- (id)stateDescription;
- (char)supportsLocale:(id)a0;
- (char)_isCompatibleWithThisDevice;
- (long long)compareAssetVersionReversed:(id)a0;
- (long long)compareDownloadPriority:(id)a0;
- (char)isANEModel;
- (char)isASRModel;
- (char)isConfig;
- (char)isMTModel;
- (char)isNewerCompatibleVersionThan:(id)a0;
- (char)isNewerVersionThan:(id)a0;
- (char)isPhrasebook;
- (char)isTTSModel;
- (id)localeIdentifiers;

@end
