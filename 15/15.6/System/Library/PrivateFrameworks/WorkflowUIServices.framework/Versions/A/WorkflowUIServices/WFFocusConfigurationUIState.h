@class WFContextualAction, LNDisplayRepresentation, LNAction;

@interface WFFocusConfigurationUIState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) char isUIValid;
@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, copy, nonatomic) LNDisplayRepresentation *displayRepresentation;
@property (readonly, copy, nonatomic) WFContextualAction *contextualAction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEnabled:(char)a0 uiValidity:(char)a1 action:(id)a2 displayRepresentation:(id)a3;
- (id)initWithEnabled:(char)a0 uiValidity:(char)a1 contextualAction:(id)a2;

@end
