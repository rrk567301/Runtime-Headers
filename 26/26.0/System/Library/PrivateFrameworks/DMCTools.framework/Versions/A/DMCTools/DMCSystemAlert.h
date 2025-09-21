@class NSString;

@interface DMCSystemAlert : NSObject {
    void /* function */ title;
    void /* function */ message;
    void /* function */ defaultButtonText;
    void /* function */ alternateButtonText;
    void /* function */ otherButtonText;
    void /* function */ completionBlock;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *defaultButtonText;
@property (nonatomic, copy) NSString *alternateButtonText;
@property (nonatomic, copy) NSString *otherButtonText;
@property (nonatomic) BOOL destructive;
@property (nonatomic) BOOL displayOnLockScreen;
@property (nonatomic) BOOL dismissOnLock;
@property (nonatomic) double dismissAfterTimeInterval;
@property (nonatomic, retain) struct __CFUserNotification { } *notification;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)notificationParametersOutFlags:(unsigned long long *)a0;

@end
