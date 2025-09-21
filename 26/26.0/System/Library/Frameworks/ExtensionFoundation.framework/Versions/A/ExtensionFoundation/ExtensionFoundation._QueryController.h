@class NSString;

@interface ExtensionFoundation._QueryController : NSObject <_EXQueryControllerDelegate> {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ handler;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)queryControllerDidUpdate:(id)a0;

@end
