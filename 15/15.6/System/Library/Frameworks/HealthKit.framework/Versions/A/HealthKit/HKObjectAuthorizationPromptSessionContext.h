@class NSDictionary, HKObjectAuthorizationPromptSessionMetadata;

@interface HKObjectAuthorizationPromptSessionContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *samplesRequiringAuthorization;
@property (readonly, copy, nonatomic) HKObjectAuthorizationPromptSessionMetadata *metadata;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSamplesRequiringAuthorization:(id)a0 metadata:(id)a1;

@end
