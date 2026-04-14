@class NSString;

@interface DMFSetAppCellularSliceUUIDRequest : DMFAppRequest

@property (copy, nonatomic) NSString *UUIDString;

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
