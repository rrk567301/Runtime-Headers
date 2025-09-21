@class CNFuture;

@interface _CNUIUserActionURLItem : CNUIUserActionItem

@property (readonly, nonatomic) CNFuture *url;
@property (readonly, nonatomic) char isSensitive;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 url:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
- (id)initWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 url:(id)a3 isSensitive:(char)a4 group:(long long)a5 options:(unsigned long long)a6;
- (id)performActionWithContext:(id)a0;
- (id)performActionWithContext:(id)a0 shouldCurateIfPerformed:(char)a1;

@end
