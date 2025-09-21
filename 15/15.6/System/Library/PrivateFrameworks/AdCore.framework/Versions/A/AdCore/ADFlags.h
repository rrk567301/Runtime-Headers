@interface ADFlags : NSObject <NSCopying>

@property unsigned long long flags;

+ (id)initWithFlags:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)reset;
- (void)set:(unsigned long long)a0;
- (char)isSet:(unsigned long long)a0;
- (char)allSet:(unsigned long long)a0;
- (unsigned long long)anySet:(unsigned long long)a0;
- (char)noneSet;
- (void)unset:(unsigned long long)a0;

@end
