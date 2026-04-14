@protocol CNTUDialRequest;

@interface _CNUIUserActionDialRequestItem : CNUIUserActionItem

@property (readonly, nonatomic) id<CNTUDialRequest> dialRequest;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 dialRequest:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
- (id)performActionWithContext:(id)a0;

@end
