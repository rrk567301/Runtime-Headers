@class NSSet;

@interface MSCMSSMIMECapabilitiesAttribute : NSObject <MSCMSAttributeCoder>

@property (readonly) NSSet *capabilities;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)encodeAttributeWithError:(id *)a0;

@end
