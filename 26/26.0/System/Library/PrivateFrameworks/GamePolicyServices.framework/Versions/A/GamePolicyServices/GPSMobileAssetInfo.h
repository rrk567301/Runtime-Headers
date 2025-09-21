@class NSSet;

@interface GPSMobileAssetInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *bundleIdentifierAllowList;
@property (retain, nonatomic) NSSet *nameAllowList;
@property (retain, nonatomic) NSSet *partialPathAllowList;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
