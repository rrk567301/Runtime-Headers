@interface PSIToken : NSObject

@property (retain, nonatomic) struct __CFString { } *string;
@property (nonatomic) struct { long long location; long long length; } range;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithString:(struct __CFString { } *)a0 range:(struct { long long x0; long long x1; })a1;
- (void)dealloc;

@end
