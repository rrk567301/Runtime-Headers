@class NSString, WFColor;

@interface WFToggleFocusModeContextualActionFocusMode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, copy, nonatomic) NSString *colorName;
@property (readonly, nonatomic) WFColor *color;

- (id)initWithIdentifier:(id)a0 name:(id)a1 symbolName:(id)a2 colorName:(id)a3;
- (id)initWithIdentifier:(id)a0 name:(id)a1 symbolName:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
