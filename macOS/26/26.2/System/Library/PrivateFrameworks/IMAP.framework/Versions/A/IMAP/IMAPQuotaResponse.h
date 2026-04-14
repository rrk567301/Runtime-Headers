@class NSString, NSArray;

@interface IMAPQuotaResponse : IMAPResponse

@property (copy, nonatomic) NSString *quotaRootName;
@property (copy, nonatomic) NSArray *quotas;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)description;

@end
