@class NSString, ATXActionCriteria;

@interface ATXHeuristicActionMaker : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *actionTypeName;
@property (retain, nonatomic) ATXActionCriteria *criteria;
@property (retain, nonatomic) NSString *heuristic;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)action;
- (id)_makeAction;

@end
