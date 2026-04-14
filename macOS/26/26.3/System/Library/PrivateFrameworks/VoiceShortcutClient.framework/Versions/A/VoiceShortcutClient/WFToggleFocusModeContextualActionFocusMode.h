@class NSString, WFColor;

@interface WFToggleFocusModeContextualActionFocusMode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, copy, nonatomic) NSString *colorName;
@property (readonly, nonatomic) WFColor *color;

- (id)description;
- (id)initWithIdentifier:(id)a0 name:(id)a1 symbolName:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 symbolName:(id)a2 colorName:(id)a3;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
