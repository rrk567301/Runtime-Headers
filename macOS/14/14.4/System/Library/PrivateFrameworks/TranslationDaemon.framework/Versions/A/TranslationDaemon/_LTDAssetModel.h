@class NSString, NSArray, _LTAssetProgress, NSObject;
@protocol _LTDAssetModelProtocol;

@interface _LTDAssetModel : NSObject <_LTDAssetModelProtocol> {
    NSArray *_localeIdentifiers;
}

@property (retain, nonatomic) NSObject<_LTDAssetModelProtocol> *provider;
@property (readonly, nonatomic) BOOL shouldPurgeWithLocale;
@property (readonly, nonatomic) BOOL isMultiLocaleAsset;
@property (readonly, nonatomic) _LTAssetProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionForAssetState:(unsigned long long)a0;
+ (id)localeIdentifiersForLanguageName:(id)a0;

- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)identifier;
- (id)initWithProvider:(id)a0;
- (unsigned long long)state;
- (BOOL)isInstalled;
- (id)status;
- (id)getLocalFileUrl;
- (BOOL)isAvailable;
- (BOOL)isDownloading;
- (long long)assetVersion;
- (long long)contentVersion;
- (id)assetId;
- (BOOL)refreshState;
- (id)supportedLanguages;
- (unsigned long long)assetType;
- (long long)downloadSize;
- (id)stateDescription;
- (BOOL)canBePurged;
- (long long)formatVersion;
- (id)assetName;
- (long long)unarchivedSize;
- (BOOL)supportsLocale:(id)a0;
- (BOOL)_isCompatibleWithThisDevice;
- (id)assetBuild;
- (id)assetLanguage;
- (id)assetTypeName;
- (long long)compareAssetVersionReversed:(id)a0;
- (BOOL)isANEModel;
- (BOOL)isASRModel;
- (BOOL)isConfig;
- (BOOL)isMTModel;
- (BOOL)isNewerCompatibleVersionThan:(id)a0;
- (BOOL)isNewerVersionThan:(id)a0;
- (BOOL)isPhrasebook;
- (BOOL)isPremiumTextLID;
- (BOOL)isTTSModel;
- (id)localeIdentifiers;
- (id)managedAssetType;
- (long long)requiredCapabilityIdentifier;

@end
