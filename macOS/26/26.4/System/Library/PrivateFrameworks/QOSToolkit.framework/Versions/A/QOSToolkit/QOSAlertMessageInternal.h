@class NSString;

@interface QOSAlertMessageInternal : NSObject {
    void /* function */ title;
    void /* function */ body;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *body;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0 body:(id)a1;

@end
