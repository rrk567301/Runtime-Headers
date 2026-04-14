@class NSSet, MSOID;

@interface MSCMSSMIMECapabilitiesAttribute : NSObject <MSCMSAttributeCoder>

@property (readonly) NSSet *capabilities;
@property (readonly, retain) MSOID *attributeType;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)initWithCapabilities:(id)a0;
- (id)copyAttributeData:(id *)a0;
- (id)encodeAttributeWithError:(id *)a0;

@end
