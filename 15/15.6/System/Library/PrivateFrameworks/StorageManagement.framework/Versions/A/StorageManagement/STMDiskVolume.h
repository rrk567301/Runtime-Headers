@class NSString, NSArray;

@interface STMDiskVolume : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *mountPath;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char isUserVolume;
@property (nonatomic) long long usedSpace;
@property (nonatomic) long long availableSpace;
@property (nonatomic) long long purgeableSpace;
@property (nonatomic) long long bytesUsed;
@property (retain, nonatomic) NSArray *categories;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
