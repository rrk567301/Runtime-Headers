@class NSArray;

@interface ICNFIMAPCapabilityResponse : ICNFIMAPResponse

@property (copy, nonatomic) NSArray *capabilities;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)description;

@end
