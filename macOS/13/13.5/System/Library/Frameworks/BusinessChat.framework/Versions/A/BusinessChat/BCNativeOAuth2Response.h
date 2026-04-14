@class NSString, NSArray, NSDictionary, BCError;

@interface BCNativeOAuth2Response : NSObject <BCOAuth2ResponseProtocol>

@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSArray *errors;
@property (readonly, nonatomic) BCError *error;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)a0;
- (id)initWithToken:(id)a0 error:(id)a1;

@end
