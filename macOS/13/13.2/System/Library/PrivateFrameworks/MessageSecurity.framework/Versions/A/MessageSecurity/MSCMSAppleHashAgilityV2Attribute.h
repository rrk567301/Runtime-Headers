@class NSDictionary;

@interface MSCMSAppleHashAgilityV2Attribute : NSObject <MSCMSAttributeCoder>

@property (readonly, retain) NSDictionary *hashAgilityValues;

- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)encodeAttributeWithError:(id *)a0;
- (id)initWithHashAgilityValues:(id)a0;

@end
