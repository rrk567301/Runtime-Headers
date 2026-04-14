@class NSString, NSArray, NSDate;

@interface MADAutoSetAtomicInstance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *autoAssetSetClientName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (readonly, retain, nonatomic) NSString *atomicInstanceUUID;
@property (readonly, retain, nonatomic) NSString *subAtomicFromAtomicInstanceUUID;
@property (readonly, retain, nonatomic) NSString *creationReason;
@property (retain, nonatomic) NSString *usageStatus;
@property (retain, nonatomic) NSDate *instanceCreationDate;
@property (nonatomic) long long instanceCreationIndex;
@property (retain, nonatomic) NSString *stagedFromOSBuild;
@property (retain, nonatomic) NSArray *instanceEntries;
@property (retain, nonatomic) NSString *activeSetJobUUID;
@property (nonatomic) BOOL catalogLookupNewerAvailable;
@property (nonatomic) BOOL allContentDownloaded;
@property (nonatomic) BOOL lockedSupportingShortTermLocking;
@property (nonatomic) BOOL awaitingLastReferenceNewerFound;
@property (nonatomic) BOOL awaitingLastReferenceAltered;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initForClientDomainName:(id)a0 forSetClientName:(id)a1 forAssetSetIdentifier:(id)a2 withAtomicInstanceUUID:(id)a3 asSubAtomicFrom:(id)a4 stagedFromOSBuild:(id)a5 forCreationReason:(id)a6 originallyCreatedOnDate:(id)a7 withCreationIndex:(long long)a8 representingInstanceEntries:(id)a9 inUseBySetJob:(id)a10;
- (id)newSummaryWithoutEntryID;

@end
