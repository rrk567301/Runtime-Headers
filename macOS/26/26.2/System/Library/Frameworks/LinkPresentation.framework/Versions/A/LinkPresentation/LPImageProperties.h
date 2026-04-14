@class NSString, NSColor;

@interface LPImageProperties : NSObject <NSCopying>

@property (copy, nonatomic) NSString *accessibilityText;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSColor *overlaidTextColor;
@property (retain, nonatomic) NSColor *dominantColor;
@property (nonatomic) BOOL hasSingleDominantColor;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
