@class NSDate;

@interface NIHeading : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) double trueHeading;
@property (nonatomic) double magneticHeading;
@property (nonatomic) double headingAccuracy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)descriptionInternal;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimestamp:(id)a0 trueHeading:(double)a1 magneticHeading:(double)a2 headingAccuracy:(double)a3;

@end
