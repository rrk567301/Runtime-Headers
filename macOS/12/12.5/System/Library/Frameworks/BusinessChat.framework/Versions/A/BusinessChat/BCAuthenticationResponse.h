@class NSString, NSArray, NSDictionary, BCError;

@interface BCAuthenticationResponse : NSObject <BCDictionarySerializable>

@property (nonatomic) NSString *status;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSArray *errors;
@property (readonly, nonatomic) BCError *error;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithToken:(id)a0 error:(id)a1;

@end
