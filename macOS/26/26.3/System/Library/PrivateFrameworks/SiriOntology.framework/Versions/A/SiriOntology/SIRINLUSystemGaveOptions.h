@class NSArray, NSString;

@interface SIRINLUSystemGaveOptions : NSObject <SIRINLUSystemDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *choices;
@property (retain, nonatomic) NSString *renderedText;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithChoices:(id)a0;

@end
