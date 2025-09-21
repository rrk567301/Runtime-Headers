@class NSString;

@interface NSDebugTDInspectorResultsTableLineItem : NSObject

@property (copy, nonatomic) NSString *keyText;
@property (copy, nonatomic) id /* block */ valueTextBlock;
@property (copy, nonatomic) id /* block */ attributedValueTextBlock;
@property (nonatomic) BOOL isHeading;
@property (nonatomic) BOOL showAttributedString;

- (id)init;
- (void).cxx_destruct;
- (id)initAsHeadingWithKeyText:(id)a0;
- (id)initWithAttributedValueText:(id /* block */)a0;
- (id)initWithKeyText:(id)a0;
- (id)initWithKeyText:(id)a0 withValueTextBlock:(id /* block */)a1;

@end
