@class NSString;

@interface NSDebugTDInspectorResultsTableLineItem : NSObject

@property (copy, nonatomic) NSString *keyText;
@property (copy, nonatomic) id /* block */ valueTextBlock;
@property (copy, nonatomic) id /* block */ attributedValueTextBlock;
@property (nonatomic) BOOL isHeading;
@property (nonatomic) BOOL showAttributedString;

- (void).cxx_destruct;
- (id)init;
- (id)initAsHeadingWithKeyText:(id)a0;
- (id)initWithAttributedValueText:(id /* block */)a0;
- (id)initWithKeyText:(id)a0;
- (id)initWithKeyText:(id)a0 withValueTextBlock:(id /* block */)a1;

@end
