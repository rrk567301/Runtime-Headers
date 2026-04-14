@class NSURL;

@interface DMFRefreshCellularPlansRequest : DMFTaskRequest

@property (copy, nonatomic) NSURL *eSIMServerURL;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
