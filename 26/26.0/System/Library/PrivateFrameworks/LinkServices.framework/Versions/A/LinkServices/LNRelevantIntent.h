@class LNAction, NSString, LNRelevantContext, RKRelevantContext;

@interface LNRelevantIntent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, copy, nonatomic) NSString *widgetKind;
@property (readonly, copy, nonatomic) RKRelevantContext *rkContext;
@property (readonly, copy, nonatomic) LNRelevantContext *context;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 action:(id)a1 widgetKind:(id)a2 rkContext:(id)a3;
- (id)initWithBundleIdentifier:(id)a0 action:(id)a1 widgetKind:(id)a2 context:(id)a3;

@end
