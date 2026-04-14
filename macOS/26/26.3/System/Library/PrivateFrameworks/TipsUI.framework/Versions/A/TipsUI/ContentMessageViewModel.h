@class NSURL, NSString;

@interface ContentMessageViewModel : NSObject {
    void /* function */ title;
    void /* function */ message;
    void /* function */ symbolName;
    void /* unknown type, empty encoding */ settingsURL;
    void /* function */ settingsText;
    void /* function */ debugActionHandler;
}

@property (class, nonatomic, readonly) NSURL *networkSettingsURL;

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, copy) NSURL *settingsURL;
@property (nonatomic, copy) NSString *settingsText;
@property (nonatomic, copy) id /* block */ debugActionHandler;

+ (long long)typeFor:(id)a0;

- (id)initWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContentMessageType:(long long)a0 additionalContext:(id)a1;
- (id)initWithError:(id)a0 defaultMessage:(id)a1;
- (id)initWithTitle:(id)a0 message:(id)a1 symbolName:(id)a2;
- (id)initWithType:(long long)a0 additionalContext:(id)a1 defaultMessage:(id)a2;

@end
