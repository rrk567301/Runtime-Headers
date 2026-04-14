@class NSDate;

@interface MSCMSSigningTimeAttribute : NSObject <MSCMSAttributeCoder>

@property (readonly, retain) NSDate *signingTime;

- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)encodeAttributeWithError:(id *)a0;
- (id)initWithSigningTime:(id)a0;

@end
