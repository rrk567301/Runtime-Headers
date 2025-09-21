@class NSString, NSArray;

@interface NSTextFinderBarSearchField : NSSearchField

@property (copy) NSString *statusString;
@property (copy) NSArray *recentAttributedSearchStrings;

- (char)_mouseDownEventIsInSearchButton:(id)a0;
- (void)mouseDown:(id)a0;
- (char)needsPanelToBecomeKey;

@end
