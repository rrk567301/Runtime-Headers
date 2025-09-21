@class PDScheduledActivityCriteria;
@protocol NSSecureCoding, NSObject;

@interface PDScheduledActivityRegistration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PDScheduledActivityCriteria *activityCriteria;
@property (readonly, nonatomic) id<NSObject, NSSecureCoding> activityContext;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActivityCriteria:(id)a0 activityContext:(id)a1;
- (char)isEqualToScheduledActivityRegistration:(id)a0;

@end
