@interface PKFPANCardDescriptor : PKAutoFillCardDescriptor <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)_createTaggedDescriptor;
+ (id)descriptorWithCardNickname:(id)a0 credential:(id)a1;
+ (id)descriptorWithCardNickname:(id)a0 displayableLastFour:(id)a1 credentialType:(unsigned long long)a2;

@end
