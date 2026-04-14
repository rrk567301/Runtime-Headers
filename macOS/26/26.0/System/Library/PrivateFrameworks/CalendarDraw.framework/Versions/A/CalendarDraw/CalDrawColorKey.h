@class NSString;

@interface CalDrawColorKey : NSObject <NSCopying>

@property (copy) NSString *styleRef;

+ (id)colorKeyForCGColor:(struct CGColor { } *)a0;
+ (id)colorKeyForConstantColor:(id)a0;
+ (id)colorKeyForNSColor:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
