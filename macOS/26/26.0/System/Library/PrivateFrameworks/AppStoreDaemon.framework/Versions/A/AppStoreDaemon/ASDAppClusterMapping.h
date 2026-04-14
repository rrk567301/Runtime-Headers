@class NSString, NSNumber;

@interface ASDAppClusterMapping : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSNumber *clusterID;
@property (copy, nonatomic) NSNumber *clusterVersion;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSNumber *launchesWeight;
@property (copy, nonatomic) NSNumber *usageWeight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
