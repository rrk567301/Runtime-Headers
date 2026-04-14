@class NSString;

@interface MailUI.MUIMailCleanupTip : NSObject {
    void /* function */ tipId;
    void /* function */ title;
    void /* function */ message;
    void /* function */ submitButtonLabel;
}

@property (nonatomic, readonly) NSString *tipId;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *submitButtonLabel;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTipId:(id)a0 title:(id)a1 message:(id)a2 submitButtonLabel:(id)a3;

@end
