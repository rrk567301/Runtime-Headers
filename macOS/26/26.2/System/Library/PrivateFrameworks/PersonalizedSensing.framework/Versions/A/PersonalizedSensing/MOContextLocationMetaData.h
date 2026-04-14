@class NSString, CLLocation, NSDateInterval;

@interface MOContextLocationMetaData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *visitTimeWindow;
@property (readonly, copy, nonatomic) NSString *place;
@property (readonly, copy, nonatomic) NSString *city;
@property (readonly, nonatomic) CLLocation *location;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)deserializeCLLocationObject:(id)a0;
- (id)initWithPlace:(id)a0 city:(id)a1;
- (id)initWithPlace:(id)a0 city:(id)a1 location:(id)a2;
- (id)initWithPlace:(id)a0 city:(id)a1 visitTimeWindow:(id)a2;
- (id)serializeCLLocationObject;

@end
