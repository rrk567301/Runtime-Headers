@class NSString, SearchUIImageView;

@interface SearchUIInlineActionButton : NSButton <CNContactQuickActionPresentation>

@property (retain) NSString *actionType;
@property (retain, nonatomic) SearchUIImageView *imageView;
@property (nonatomic) BOOL isCompact;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *systemImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)dimensionForCompact:(BOOL)a0;

@end
