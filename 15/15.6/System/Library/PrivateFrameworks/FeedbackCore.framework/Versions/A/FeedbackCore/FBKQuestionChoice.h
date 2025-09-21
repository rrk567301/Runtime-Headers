@class NSString;

@interface FBKQuestionChoice : NSObject <NSSecureCoding, FBKDiffableObject>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *title;
@property (readonly) id value;
@property (readonly, getter=isPrompt) char prompt;
@property char canSelect;

+ (id)choiceFromArray:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 value:(id)a1;
- (id)diffableHashWithContext:(id)a0;

@end
