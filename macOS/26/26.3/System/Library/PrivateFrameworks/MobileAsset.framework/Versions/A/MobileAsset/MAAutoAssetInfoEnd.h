@class NSString;

@interface MAAutoAssetInfoEnd : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *endLockReason;
@property (readonly, nonatomic) long long endLockCount;

- (id)description;
- (id)summary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLockReason:(id)a0 endingLockCount:(long long)a1;

@end
