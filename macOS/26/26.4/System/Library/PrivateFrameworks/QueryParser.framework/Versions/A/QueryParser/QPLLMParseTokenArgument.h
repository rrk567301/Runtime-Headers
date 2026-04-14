@class NSString;

@interface QPLLMParseTokenArgument : NSObject

@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *tokenLabel;

- (void).cxx_destruct;
- (id)getEncodedData;
- (id)initWithLabel:(id)a0 token:(id)a1;

@end
