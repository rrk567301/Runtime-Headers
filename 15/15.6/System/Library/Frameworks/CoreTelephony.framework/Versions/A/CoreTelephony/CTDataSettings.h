@interface CTDataSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isCellularDataEnabled) char cellularDataEnabled;
@property (nonatomic, getter=isAirplaneModeEnabled) char airplaneModeEnabled;
@property (nonatomic, getter=isCellularDataCapable) char cellularDataCapable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
