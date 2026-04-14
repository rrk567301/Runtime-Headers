@class NSString, NSArray;

@interface ICNFIMAPOtherResponse : ICNFIMAPResponse

@property (copy, nonatomic) NSString *responseName;
@property (copy, nonatomic) NSArray *parameters;

- (void).cxx_destruct;
- (id)description;

@end
