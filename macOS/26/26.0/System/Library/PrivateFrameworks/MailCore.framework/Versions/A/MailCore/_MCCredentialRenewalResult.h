@class NSError;

@interface _MCCredentialRenewalResult : NSObject

@property (nonatomic) long long renewResult;
@property (retain, nonatomic) NSError *error;

- (id)initWithResult:(long long)a0 error:(id)a1;
- (void).cxx_destruct;

@end
