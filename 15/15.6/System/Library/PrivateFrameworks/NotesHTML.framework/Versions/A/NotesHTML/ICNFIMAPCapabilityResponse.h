@class NSArray;

@interface ICNFIMAPCapabilityResponse : ICNFIMAPResponse

@property (copy, nonatomic) NSArray *capabilities;

+ (char)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;

@end
