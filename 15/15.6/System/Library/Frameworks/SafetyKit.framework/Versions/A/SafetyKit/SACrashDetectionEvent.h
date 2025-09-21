@class CLLocation, NSDate;

@interface SACrashDetectionEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isNotified;
@property (readonly, nonatomic) double elapsed;
@property (readonly, nonatomic) NSDate *timeOfResolution;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long response;
@property (readonly, nonatomic) CLLocation *location;

+ (double)crashDetectionEventTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimeOfDetection:(id)a0 timeOfResolution:(id)a1 response:(long long)a2 location:(id)a3;
- (id)initWithTimeOfDetection:(id)a0 timeOfResolution:(id)a1 response:(long long)a2 location:(id)a3 isNotified:(char)a4;

@end
