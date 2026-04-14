@class NSString;

@interface SAFNotificationConfiguration : NSObject {
    void /* function */ title;
    void /* function */ body;
    void /* function */ defaultButtonTitle;
    void /* function */ defaultButtonHandler;
    void /* function */ alternateButtonTitle;
    void /* function */ alternateButtonHandler;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *defaultButtonTitle;
@property (nonatomic, copy) id /* block */ defaultButtonHandler;
@property (nonatomic, copy) NSString *alternateButtonTitle;
@property (nonatomic, copy) id /* block */ alternateButtonHandler;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0 body:(id)a1 defaultButtonTitle:(id)a2 defaultButtonHandler:(id /* block */)a3 alternateButtonTitle:(id)a4 alternateButtonHandler:(id /* block */)a5;

@end
