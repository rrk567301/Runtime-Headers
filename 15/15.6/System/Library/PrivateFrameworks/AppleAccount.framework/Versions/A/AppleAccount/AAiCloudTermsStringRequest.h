@interface AAiCloudTermsStringRequest : AAGenericTermsUIRequest

+ (Class)responseClass;

- (id)initWithAccount:(id)a0;
- (id)urlString;
- (id)initWithAccount:(id)a0 preferPassword:(char)a1;
- (id)initWithAccount:(id)a0 termsEntries:(id)a1 preferPassword:(char)a2;

@end
