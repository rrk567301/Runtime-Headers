@class NSDictionary;

@interface SensitiveContentAnalysisUI.InterventionViewController : NSViewController <SCUIInterventionContainer> {
    void /* unknown type, empty encoding */ config;
}

@property (nonatomic, readonly) long long workflow;
@property (nonatomic, readonly) NSDictionary *contextDictionary;
@property (nonatomic, weak) void /* function */ interventionDelegate;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
