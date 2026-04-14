@class LNSchemaDialogStatement, LNStaticDeferredLocalizedString, NSArray;

@interface LNActionSideEffectBehavior : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *dialog;
@property (readonly, nonatomic) LNSchemaDialogStatement *dynamicDialog;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *confirmLabel;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *cancelLabel;
@property (readonly, nonatomic) NSArray *keyPathsToRender;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithKind:(long long)a0 dialog:(id)a1;
- (id)initWithKind:(long long)a0 dialog:(id)a1 dynamicDialog:(id)a2;
- (id)initWithKind:(long long)a0 dialog:(id)a1 dynamicDialog:(id)a2 confirmLabel:(id)a3 cancelLabel:(id)a4 keyPathsToRender:(id)a5;

@end
