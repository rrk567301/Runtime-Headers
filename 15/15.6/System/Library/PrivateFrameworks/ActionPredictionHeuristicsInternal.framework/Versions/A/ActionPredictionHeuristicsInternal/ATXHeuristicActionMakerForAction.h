@class ATXAction;

@interface ATXHeuristicActionMakerForAction : ATXHeuristicActionMaker {
    ATXAction *_action;
}

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(id)a0;
- (id)_makeAction;
- (id)actionTypeName;

@end
