@interface _NSURLSessionBackgroundTaskOverrides : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned char _allowsCellularAccess;
@property unsigned char _allowsExpensiveNetworkAccess;
@property unsigned char _allowsConstrainedNetworkAccess;
@property unsigned char _requiresPowerPluggedIn;
@property BOOL allowsCellularAccess;
@property BOOL allowsExpensiveNetworkAccess;
@property BOOL allowsConstrainedNetworkAccess;
@property BOOL requiresPowerPluggedIn;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
