@class NSString;

@interface MAAutoAssetLockReason : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *autoAssetClientName;
@property (retain, nonatomic) NSString *lockReason;

- (id)newSummaryDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initForClientName:(id)a0 forLockReason:(id)a1;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
