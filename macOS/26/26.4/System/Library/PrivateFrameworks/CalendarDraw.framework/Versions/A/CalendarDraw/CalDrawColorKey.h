@class NSString;

@interface CalDrawColorKey : NSObject <NSCopying>

@property (copy) NSString *styleRef;

+ (id)colorKeyForCGColor:(struct CGColor { } *)a0;
+ (id)colorKeyForConstantColor:(id)a0;
+ (id)colorKeyForNSColor:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
