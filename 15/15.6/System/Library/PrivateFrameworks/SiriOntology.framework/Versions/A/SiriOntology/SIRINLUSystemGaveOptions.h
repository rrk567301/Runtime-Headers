@class NSArray, NSString;

@interface SIRINLUSystemGaveOptions : NSObject <SIRINLUSystemDialogAct>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *choices;
@property (retain, nonatomic) NSString *renderedText;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithChoices:(id)a0;

@end
