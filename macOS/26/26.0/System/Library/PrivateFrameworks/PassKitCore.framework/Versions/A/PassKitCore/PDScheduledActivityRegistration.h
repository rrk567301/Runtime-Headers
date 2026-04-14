@class PDScheduledActivityCriteria;
@protocol NSSecureCoding, NSObject;

@interface PDScheduledActivityRegistration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PDScheduledActivityCriteria *activityCriteria;
@property (readonly, nonatomic) id<NSObject, NSSecureCoding> activityContext;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToScheduledActivityRegistration:(id)a0;
- (id)initWithActivityCriteria:(id)a0 activityContext:(id)a1;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
