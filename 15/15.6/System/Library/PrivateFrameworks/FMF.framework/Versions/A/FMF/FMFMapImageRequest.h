@class NSString, CLLocation;

@interface FMFMapImageRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) char isShifted;
@property (nonatomic) double altitude;
@property (readonly, nonatomic) NSString *key;
@property (nonatomic) double pitch;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) char cachingEnabled;
@property (nonatomic) long long priority;
@property (nonatomic) double radius;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocation:(id)a0 altitude:(double)a1 pitch:(double)a2 width:(double)a3 height:(double)a4 andCachingEnabled:(char)a5;
- (id)initWithLocation:(id)a0 isShifted:(char)a1 altitude:(double)a2 pitch:(double)a3 width:(double)a4 height:(double)a5 andCachingEnabled:(char)a6;
- (id)initWithLocation:(id)a0 isShifted:(char)a1 radius:(double)a2 width:(double)a3 height:(double)a4 andCachingEnabled:(char)a5;
- (id)initWithLocation:(id)a0 radius:(double)a1 width:(double)a2 height:(double)a3 andCachingEnabled:(char)a4;

@end
