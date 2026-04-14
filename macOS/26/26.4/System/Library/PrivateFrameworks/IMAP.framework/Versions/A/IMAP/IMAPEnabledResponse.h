@class NSString;

@interface IMAPEnabledResponse : IMAPResponse

@property (copy, nonatomic) NSString *capability;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)description;

@end
