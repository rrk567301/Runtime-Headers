@class NSString;

@interface STGenericIntentLocation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) char isLatLong;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 latitude:(double)a1 longitude:(double)a2;

@end
