@class NSDictionary, LNAction;

@interface LNAppShortcutActionData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, copy, nonatomic) NSDictionary *identifiersByTypeMap;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(id)a0 typeMap:(id)a1;

@end
