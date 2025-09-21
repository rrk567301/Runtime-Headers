@class NSString, NSArray;

@interface MAAutoAssetSetInstanceDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (readonly, retain, nonatomic) NSArray *atomicInstanceEntries;
@property (readonly, nonatomic) char isFullyDownloaded;
@property (readonly, nonatomic) char neverBeenLocked;
@property (readonly, nonatomic) char downloadUserInitiated;
@property (readonly, nonatomic) long long downloadedNetworkBytes;
@property (readonly, nonatomic) long long downloadedFilesystemBytes;
@property (readonly, nonatomic) char stagedPriorToAvailable;

+ (id)paddedString:(id)a0 paddingToLenghtOfString:(id)a1 paddingWith:(id)a2 paddingBefore:(char)a3;
+ (id)newMaxColumnStrings;
+ (id)paddedBanner:(id)a0;
+ (id)paddedHeader:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)padded:(id)a0;
- (void)buildMaxColumnStrings:(id)a0;
- (id)description:(char)a0;
- (id)initForClientDomainName:(id)a0 forAssetSetIdentifier:(id)a1 withAtomicInstanceEntries:(id)a2 withFullyDownloaded:(char)a3 withNeverBeenLocked:(char)a4 withDownloadUserInitiated:(char)a5 withDownloadedNetworkBytes:(long long)a6 withDownloadedFilesystemBytes:(long long)a7 withStagedPriorToAvailable:(char)a8;

@end
