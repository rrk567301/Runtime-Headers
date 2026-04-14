@class NSString, NSAttributedString;

@interface _LTTextInput : NSObject

@property (readonly, copy, nonatomic) NSString *sourceText;
@property (readonly, copy, nonatomic) NSAttributedString *sourceAttributedText;
@property (readonly, nonatomic) BOOL containsAlignment;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;

- (void).cxx_destruct;
- (id)initWithSourceAttributedText:(id)a0 clientIdentifier:(id)a1;
- (id)initWithSourceText:(id)a0 clientIdentifier:(id)a1;

@end
