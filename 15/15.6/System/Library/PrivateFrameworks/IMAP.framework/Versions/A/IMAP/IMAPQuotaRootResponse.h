@class NSString, NSArray;

@interface IMAPQuotaRootResponse : IMAPResponse

@property (copy, nonatomic) NSString *mailboxName;
@property (copy, nonatomic) NSArray *quotaRootNames;

+ (char)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;

@end
