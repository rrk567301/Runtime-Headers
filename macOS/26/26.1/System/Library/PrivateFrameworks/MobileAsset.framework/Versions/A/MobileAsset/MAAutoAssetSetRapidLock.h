@class NSString;

@interface MAAutoAssetSetRapidLock : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientDomainName;
@property (retain, nonatomic) NSString *assetSetIdentifier;
@property (retain, nonatomic) NSString *assetSetAtomicInstance;
@property (readonly, retain, nonatomic) NSString *shortTermLockFileName;

+ (id)lockRecords;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)acquireShortTermLockSync;
- (id)checkLockFileValidity;
- (id)endShortTermLockSync;
- (id)init:(id)a0 assetSetIdentifier:(id)a1 assetSetAtomicInstance:(id)a2;

@end
