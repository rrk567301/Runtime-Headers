@class NSString, MAAutoAssetSetPolicy;

@interface MAAutoAssetSetInfoDesire : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetSetPolicy *clientAssetSetPolicy;
@property (readonly, retain, nonatomic) NSString *desireReason;
@property (readonly, nonatomic) char awaitDownloadingOfDiscovered;
@property (readonly, nonatomic) long long checkWaitTimeoutSecs;
@property (readonly, nonatomic) long long lockWaitTimeoutSecs;
@property (readonly, nonatomic) char downloadProgressDesired;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initForClientAssetSetPolicy:(id)a0 reasonDesired:(id)a1 awaitingDownloadOfDiscovered:(char)a2 withCheckWaitTimeout:(long long)a3 withLockWaitTimeout:(long long)a4 desiringProgress:(char)a5;

@end
