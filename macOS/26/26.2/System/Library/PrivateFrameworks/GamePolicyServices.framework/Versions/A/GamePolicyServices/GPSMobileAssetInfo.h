@class NSSet;

@interface GPSMobileAssetInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *bundleIdentifierAllowList;
@property (retain, nonatomic) NSSet *nameAllowList;
@property (retain, nonatomic) NSSet *partialPathAllowList;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
