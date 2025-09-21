@class NSURL;

@interface DMFRefreshCellularPlansRequest : DMFTaskRequest

@property (copy, nonatomic) NSURL *eSIMServerURL;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
