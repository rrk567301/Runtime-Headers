@class NSString, NSDictionary;

@interface IMAPStatusResponse : IMAPResponse

@property (copy, nonatomic) NSString *mailboxName;
@property (copy, nonatomic) NSDictionary *statusEntries;

+ (char)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;

@end
