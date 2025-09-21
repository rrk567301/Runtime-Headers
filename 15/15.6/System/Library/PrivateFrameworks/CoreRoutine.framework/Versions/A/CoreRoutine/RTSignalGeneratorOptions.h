@class NSArray, RTLocation;

@interface RTSignalGeneratorOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) RTLocation *startLocation;
@property (readonly, nonatomic) RTLocation *endLocation;
@property (readonly, nonatomic) NSArray *expectedVisits;

+ (id)getVisitsFromVisitsDescriptionData:(id)a0;
+ (id)visitsDescriptionDataAtPath:(id)a0;
+ (char)visitsOverlapping:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStartLocation:(id)a0 endLocation:(id)a1 expectedVisits:(id)a2;
- (id)initWithVisitsDescriptionData:(id)a0;
- (id)initWithVisitsDescriptionPListPath:(id)a0;

@end
