@class NSString, NSSet;

@interface HKAuthorizationPresentationRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *readUsageDescription;
@property (copy, nonatomic) NSString *shareUsageDescription;
@property (copy, nonatomic) NSString *researchStudyUsageDescription;
@property (copy, nonatomic) NSSet *typesRequiringReadAuthorization;
@property (copy, nonatomic) NSSet *typesRequiringShareAuthorization;
@property (nonatomic, getter=shouldDismissWhenBackgrounded) char dismissWhenBackgrounded;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
