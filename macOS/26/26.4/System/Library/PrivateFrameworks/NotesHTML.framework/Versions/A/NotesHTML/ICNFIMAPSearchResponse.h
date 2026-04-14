@class NSArray;

@interface ICNFIMAPSearchResponse : ICNFIMAPResponse

@property (copy, nonatomic) NSArray *searchResults;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;

@end
