@class NSString, NSNumber, NSMutableDictionary;

@interface SSRestoreContentItem : NSObject {
    NSNumber *_accountID;
    NSString *_appleID;
    NSNumber *_cloudMatchStatus;
    BOOL _isRestore;
    NSMutableDictionary *_properties;
}

@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *cloudItemID;
@property (retain, nonatomic) NSNumber *cloudMatchStatus;
@property (copy, nonatomic) NSString *downloadKind;
@property (copy, nonatomic) NSString *podcastEpisodeGUID;
@property (copy, nonatomic) NSString *storeAccountAppleID;
@property (retain, nonatomic) NSNumber *storeAccountID;
@property (copy, nonatomic) NSString *storeFrontID;
@property (retain, nonatomic) NSNumber *storeItemID;
@property (copy, nonatomic) NSString *storeSoftwareVersionID;
@property (copy, nonatomic) NSString *installPath;
@property (nonatomic, getter=isDRMFree) BOOL DRMFree;
@property (copy, nonatomic) NSString *storeFlavor;
@property (copy, nonatomic) NSString *videoDimensions;

- (id)init;
- (void)_setValue:(id)a0 forProperty:(id)a1;
- (void).cxx_destruct;
- (id)_restoreKeyForDownloadProperty:(id)a0;
- (id)_initSSRestoreContentItem;
- (id)_restoreKeyForAssetProperty:(id)a0;
- (id)copyRestoreDictionary;
- (id)initWithRestoreDownload:(id)a0;
- (BOOL)isEligibleForRestore:(id *)a0;
- (void)setValue:(id)a0 forAssetProperty:(id)a1;
- (void)setValue:(id)a0 forDownloadProperty:(id)a1;

@end
