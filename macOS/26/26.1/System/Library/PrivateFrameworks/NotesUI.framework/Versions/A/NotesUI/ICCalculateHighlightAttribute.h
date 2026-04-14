@class NSArray, NSColor, NSString;

@interface ICCalculateHighlightAttribute : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *errors;
@property (readonly, copy, nonatomic) NSColor *color;
@property (readonly, nonatomic) long long underlineStyle;
@property (readonly, copy, nonatomic) NSColor *underlineColor;
@property (readonly, copy, nonatomic) NSString *tooltip;
@property (readonly, copy, nonatomic) NSArray *suggestions;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
