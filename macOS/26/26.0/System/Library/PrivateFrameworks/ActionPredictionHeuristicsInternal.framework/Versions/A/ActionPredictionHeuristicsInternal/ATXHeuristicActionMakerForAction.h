@class ATXAction;

@interface ATXHeuristicActionMakerForAction : ATXHeuristicActionMaker {
    ATXAction *_action;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAction:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_makeAction;
- (id)actionTypeName;

@end
