@class NSArray, NSString;

@interface IFRequirementsEvaluatorResult : NSObject {
    BOOL _shouldContinue;
    BOOL _shouldSkip;
    NSArray *_errorDeps;
    NSString *_title;
    NSString *_message;
    id _reference;
}

- (BOOL)shouldContinue;
- (void)setMessage:(id)a0;
- (void)setTitle:(id)a0;
- (void)setShouldContinue:(BOOL)a0;
- (id)title;
- (id)reference;
- (id)description;
- (id)reason;
- (void)dealloc;
- (id)message;
- (BOOL)shouldSkip;
- (id)errorRequirements;
- (id)initWithShouldContinue:(BOOL)a0 shouldSkip:(BOOL)a1 errorDeps:(id)a2 reference:(id)a3;

@end
