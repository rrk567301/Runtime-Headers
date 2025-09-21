@class NSString;

@interface MAAutoAssetInfoEnd : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *endLockReason;
@property (readonly, nonatomic) long long endLockCount;

- (id)initWithLockReason:(id)a0 endingLockCount:(long long)a1;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
