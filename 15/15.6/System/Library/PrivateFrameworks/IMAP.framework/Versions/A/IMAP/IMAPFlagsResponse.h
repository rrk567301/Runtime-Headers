@class NSSet;

@interface IMAPFlagsResponse : IMAPResponse

@property (copy, nonatomic) NSSet *flags;

+ (char)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;

@end
