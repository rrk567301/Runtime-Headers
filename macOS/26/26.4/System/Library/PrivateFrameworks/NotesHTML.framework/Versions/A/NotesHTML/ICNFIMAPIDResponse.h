@class NSDictionary;

@interface ICNFIMAPIDResponse : ICNFIMAPResponse

@property (copy, nonatomic) NSDictionary *serverID;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)description;

@end
