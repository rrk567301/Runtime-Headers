@class NSString;
@protocol VUISearchFieldDelegate;

@interface VUISearchField : NSSearchField <NSSearchFieldDelegate>

@property (nonatomic) BOOL isFirstResponder;
@property (weak, nonatomic) id<VUISearchFieldDelegate> vuiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;

@end
