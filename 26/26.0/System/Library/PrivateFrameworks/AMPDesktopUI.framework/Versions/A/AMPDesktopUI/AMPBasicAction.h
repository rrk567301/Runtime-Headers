@class NSString, NSImage;

@interface AMPBasicAction : AMPAction

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSImage *icon;
@property (copy, nonatomic) id /* block */ validationBlock;
@property (copy, nonatomic) id /* block */ executionBlock;

- (BOOL)isValid;
- (void).cxx_destruct;
- (void)executeWithCompletion:(id /* block */)a0;
- (id)initWithTitle:(id)a0 icon:(id)a1 items:(id)a2 validation:(id /* block */)a3 execution:(id /* block */)a4;
- (id)initWithTitle:(id)a0 icon:(id)a1 items:(id)a2 validation:(id /* block */)a3 synchronousExecution:(id /* block */)a4;

@end
