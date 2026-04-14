@class NSString, LUIGoodSamaritanMessageView;

@interface LUIMessageViewController : LUIViewController {
    LUIGoodSamaritanMessageView *_messageView;
    NSString *_currentMessage;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)a0;

- (id)initWithStyle:(int)a0;
- (void)setMessage:(id)a0;
- (void)refresh;
- (void)dealloc;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)_setupContentView;

@end
