@class NSString;

@interface DMFSetAppCellularSliceUUIDRequest : DMFAppRequest

@property (copy, nonatomic) NSString *UUIDString;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
