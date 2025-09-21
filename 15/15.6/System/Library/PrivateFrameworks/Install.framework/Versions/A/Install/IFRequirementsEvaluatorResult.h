@class NSArray, NSString;

@interface IFRequirementsEvaluatorResult : NSObject {
    char _shouldContinue;
    char _shouldSkip;
    NSArray *_errorDeps;
    NSString *_title;
    NSString *_message;
    id _reference;
}

- (void)dealloc;
- (id)description;
- (id)reason;
- (id)message;
- (void)setMessage:(id)a0;
- (void)setTitle:(id)a0;
- (id)title;
- (char)shouldContinue;
- (id)reference;
- (char)shouldSkip;
- (void)setShouldContinue:(char)a0;
- (id)errorRequirements;
- (id)initWithShouldContinue:(char)a0 shouldSkip:(char)a1 errorDeps:(id)a2 reference:(id)a3;

@end
