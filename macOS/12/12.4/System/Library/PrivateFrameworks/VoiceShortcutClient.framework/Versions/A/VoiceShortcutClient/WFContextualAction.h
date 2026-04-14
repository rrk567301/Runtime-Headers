@class WFContextualActionFilteringBehavior, NSArray, NSString, NSData;

@interface WFContextualAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *displaySlots;
@property (copy, nonatomic) NSString *iconSymbolName;
@property (copy, nonatomic) NSData *iconImageData;
@property (nonatomic) double iconImageScale;
@property (readonly, nonatomic) WFContextualActionFilteringBehavior *filteringBehavior;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) unsigned long long correspondingSystemActionType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long resultFileOperation;
@property (readonly, nonatomic, getter=isAlternate) BOOL alternate;
@property (readonly, copy, nonatomic) NSString *displayString;

+ (id)systemActionWithType:(unsigned long long)a0 identifier:(id)a1 displayString:(id)a2 inputTypes:(id)a3;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)contextualActionBySettingParameters:(id)a0;
- (id)initWithIdentifier:(id)a0 actionIdentifier:(id)a1 type:(unsigned long long)a2 correspondingSystemActionType:(unsigned long long)a3 resultFileOperation:(long long)a4 alternate:(BOOL)a5 filteringBehavior:(id)a6 parameters:(id)a7 displaySlots:(id)a8;

@end
