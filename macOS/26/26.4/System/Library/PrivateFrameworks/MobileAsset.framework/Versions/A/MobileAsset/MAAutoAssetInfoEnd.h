@class NSString;

@interface MAAutoAssetInfoEnd : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *endLockReason;
@property (readonly, nonatomic) long long endLockCount;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLockReason:(id)a0 endingLockCount:(long long)a1;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
