@class NSArray, NSString;

@interface IFRequirementsEvaluatorResult : NSObject {
    BOOL _shouldContinue;
    BOOL _shouldSkip;
    NSArray *_errorDeps;
    NSString *_title;
    NSString *_message;
    id _reference;
}

- (id)reference;
- (id)message;
- (id)description;
- (void)setMessage:(id)a0;
- (id)title;
- (void)dealloc;
- (id)reason;
- (void)setTitle:(id)a0;
- (BOOL)shouldContinue;
- (void)setShouldContinue:(BOOL)a0;
- (BOOL)shouldSkip;
- (id)errorRequirements;
- (id)initWithShouldContinue:(BOOL)a0 shouldSkip:(BOOL)a1 errorDeps:(id)a2 reference:(id)a3;

@end
