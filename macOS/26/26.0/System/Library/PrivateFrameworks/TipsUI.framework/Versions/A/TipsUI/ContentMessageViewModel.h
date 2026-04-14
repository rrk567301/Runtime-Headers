@class NSString, NSURL;

@interface ContentMessageViewModel : NSObject {
    void /* function */ title;
    void /* function */ message;
    void /* function */ symbolName;
    void /* unknown type, empty encoding */ settingsURL;
    void /* function */ settingsText;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, copy) NSURL *settingsURL;
@property (nonatomic, copy) NSString *settingsText;

- (id)initWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 message:(id)a1 symbolName:(id)a2;

@end
