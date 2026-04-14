@class NSDate;

@interface MSCMSAppleExpirationTimeAttribute : NSObject <MSCMSAttributeCoder>

@property (readonly, retain) NSDate *expirationTime;

- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)encodeAttributeWithError:(id *)a0;
- (id)initWithExpirationTime:(id)a0;

@end
