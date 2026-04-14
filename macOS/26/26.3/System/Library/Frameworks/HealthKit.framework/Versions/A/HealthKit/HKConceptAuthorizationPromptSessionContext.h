@class NSArray;

@interface HKConceptAuthorizationPromptSessionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *userAnnotatedMedications;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithConceptsRequiringAuthorization:(id)a0;

@end
