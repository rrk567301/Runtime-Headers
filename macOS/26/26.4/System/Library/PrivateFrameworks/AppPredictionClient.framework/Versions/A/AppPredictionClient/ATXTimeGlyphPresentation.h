@class NSString;

@interface ATXTimeGlyphPresentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, copy, nonatomic) NSString *colorName;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long options;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithSymbolName:(id)a0 colorName:(id)a1 title:(id)a2 options:(unsigned long long)a3;
- (BOOL)isEqualToATXTimeGlyphPresentation:(id)a0;

@end
