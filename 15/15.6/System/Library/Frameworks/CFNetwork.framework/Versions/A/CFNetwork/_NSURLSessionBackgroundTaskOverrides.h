@interface _NSURLSessionBackgroundTaskOverrides : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property int _allowsCellularAccess;
@property int _allowsExpensiveNetworkAccess;
@property int _allowsConstrainedNetworkAccess;
@property int _requiresPowerPluggedIn;
@property char allowsCellularAccess;
@property char allowsExpensiveNetworkAccess;
@property char allowsConstrainedNetworkAccess;
@property char requiresPowerPluggedIn;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
