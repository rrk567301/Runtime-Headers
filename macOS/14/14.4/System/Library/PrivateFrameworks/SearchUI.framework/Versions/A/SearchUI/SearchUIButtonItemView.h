@class NSString, NSColor, SFImage;
@protocol SearchUIButtonItemViewDelegate;

@interface SearchUIButtonItemView : NSButton

@property (retain, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) NSColor *buttonColor;
@property (retain, nonatomic) SFImage *sfImage;
@property (weak, nonatomic) id<SearchUIButtonItemViewDelegate> delegate;

- (void).cxx_destruct;
- (id)menuForEvent:(id)a0;

@end
