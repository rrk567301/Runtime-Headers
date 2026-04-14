@class NSString, NSColor;

@interface LPImageProperties : NSObject <NSCopying>

@property (copy, nonatomic) NSString *accessibilityText;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSColor *overlaidTextColor;
@property (retain, nonatomic) NSColor *dominantColor;
@property (nonatomic) BOOL hasSingleDominantColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
