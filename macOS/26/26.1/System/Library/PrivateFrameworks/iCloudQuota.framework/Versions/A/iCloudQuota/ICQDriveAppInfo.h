@class NSArray, NSString;

@interface ICQDriveAppInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *bundleIds;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) BOOL excludeOnClient;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromDictionary:(id)a0;

@end
