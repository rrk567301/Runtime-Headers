@class NSIndexSet;

@interface IMAPVanishedResponse : IMAPResponse

@property (nonatomic) char earlier;
@property (copy, nonatomic) NSIndexSet *uids;

+ (char)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;

@end
