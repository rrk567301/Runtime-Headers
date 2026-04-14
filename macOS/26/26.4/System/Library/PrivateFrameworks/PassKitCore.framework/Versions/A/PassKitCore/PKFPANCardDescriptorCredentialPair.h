@class PKFPANCardDescriptor, PKAutoFillCardCredential;

@interface PKFPANCardDescriptorCredentialPair : NSObject

@property (retain, nonatomic) PKFPANCardDescriptor *descriptor;
@property (retain, nonatomic) PKAutoFillCardCredential *credential;

- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 credential:(id)a1;

@end
