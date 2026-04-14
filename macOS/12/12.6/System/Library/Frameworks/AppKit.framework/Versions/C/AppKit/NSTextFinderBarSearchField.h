@class NSString, NSArray;

@interface NSTextFinderBarSearchField : NSSearchField

@property (copy) NSString *statusString;
@property (copy) NSArray *recentAttributedSearchStrings;

- (void)mouseDown:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)_mouseDownEventIsInSearchButton:(id)a0;

@end
