@class NSString, NSArray;

@interface IMAPQuotaRootResponse : IMAPResponse

@property (copy, nonatomic) NSString *mailboxName;
@property (copy, nonatomic) NSArray *quotaRootNames;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)description;

@end
