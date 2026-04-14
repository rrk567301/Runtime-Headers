@class NSString, LUIGoodSamaritanMessageView;

@interface LUIMessageViewController : LUIViewController {
    LUIGoodSamaritanMessageView *_messageView;
    NSString *_currentMessage;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)a0;

- (void)setMessage:(id)a0;
- (void)refresh;
- (void).cxx_destruct;
- (id)initWithStyle:(int)a0;
- (void)_layoutContentView;
- (void)dealloc;
- (void)_setupContentView;

@end
