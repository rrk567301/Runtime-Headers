@class NSString, NSTextField;

@interface ISVizTitlePlacard : NSView

@property (retain, nonatomic) NSTextField *titleHeaderView;
@property (retain, nonatomic) NSTextField *titleSubtext1View;
@property (retain, nonatomic) NSTextField *titleSubtext2View;
@property (copy, nonatomic) NSString *titleHeader;
@property (copy, nonatomic) NSString *titleSubtext1;
@property (copy, nonatomic) NSString *titleSubtext2;

- (void).cxx_destruct;
- (id)init;

@end
