@class NSString;

@interface QOSAlertMessageInternal : NSObject {
    void /* function */ title;
    void /* function */ body;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *body;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 body:(id)a1;

@end
