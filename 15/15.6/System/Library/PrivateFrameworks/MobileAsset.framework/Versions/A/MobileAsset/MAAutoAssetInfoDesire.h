@class NSString, MAAutoAssetPolicy;

@interface MAAutoAssetInfoDesire : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *updateCategoryDesiredByClient;
@property (readonly, retain, nonatomic) MAAutoAssetPolicy *clientAssetPolicy;
@property (readonly, nonatomic) long long checkWaitTimeoutSecs;
@property (readonly, retain, nonatomic) NSString *desireReason;
@property (readonly, nonatomic) long long lockWaitTimeoutSecs;
@property (readonly, nonatomic) char downloadProgressDesired;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithDesiredCategory:(id)a0 forClientAssetPolicy:(id)a1 reasonDesired:(id)a2 withCheckWaitTimeout:(long long)a3 withLockWaitTimeout:(long long)a4 desiringProgress:(char)a5;

@end
