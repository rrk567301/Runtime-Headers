@class NSArray, NSString;

@interface IFRequirementsEvaluatorResult : NSObject {
    BOOL _shouldContinue;
    BOOL _shouldSkip;
    NSArray *_errorDeps;
    NSString *_title;
    NSString *_message;
    id _reference;
}

- (void)setMessage:(id)a0;
- (void)setShouldContinue:(BOOL)a0;
- (id)reference;
- (void)setTitle:(id)a0;
- (id)message;
- (BOOL)shouldContinue;
- (id)reason;
- (id)description;
- (void)dealloc;
- (id)title;
- (BOOL)shouldSkip;
- (id)errorRequirements;
- (id)initWithShouldContinue:(BOOL)a0 shouldSkip:(BOOL)a1 errorDeps:(id)a2 reference:(id)a3;

@end
