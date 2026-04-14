@class NSString;

@interface CalDrawColorKey : NSObject <NSCopying>

@property (copy) NSString *styleRef;

+ (id)colorKeyForCGColor:(struct CGColor { } *)a0;
+ (id)colorKeyForConstantColor:(id)a0;
+ (id)colorKeyForNSColor:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
