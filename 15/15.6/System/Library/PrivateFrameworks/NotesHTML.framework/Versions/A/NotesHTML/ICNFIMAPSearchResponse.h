@class NSArray;

@interface ICNFIMAPSearchResponse : ICNFIMAPResponse

@property (copy, nonatomic) NSArray *searchResults;

+ (char)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;

@end
