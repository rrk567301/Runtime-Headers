@class NSString, NSDateInterval;

@interface MOContextActivityMetaData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *activityDuration;
@property (readonly, copy, nonatomic) NSString *activityType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithActivityType:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithActivityType:(id)a0 activityDuration:(id)a1;

@end
