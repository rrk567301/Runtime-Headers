@class NSString, LUIGoodSamaritanMessageView;

@interface LUIMessageViewController : LUIViewController {
    LUIGoodSamaritanMessageView *_messageView;
    NSString *_currentMessage;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)a0;

- (void)setMessage:(id)a0;
- (void)refresh;
- (id)initWithStyle:(int)a0;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setupContentView;

@end
