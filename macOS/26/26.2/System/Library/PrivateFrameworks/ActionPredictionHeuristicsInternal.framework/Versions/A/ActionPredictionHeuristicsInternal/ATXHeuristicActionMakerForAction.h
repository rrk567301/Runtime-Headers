@class ATXAction;

@interface ATXHeuristicActionMakerForAction : ATXHeuristicActionMaker {
    ATXAction *_action;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAction:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)_makeAction;
- (id)actionTypeName;

@end
