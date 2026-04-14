@class NSString;

@interface IMDAskToParser : NSObject {
    void /* unknown type, empty encoding */ urlParser;
    void /* unknown type, empty encoding */ payload;
    void /* unknown type, empty encoding */ url;
}

@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readonly) NSString *notificationText;
@property (nonatomic, readonly) NSString *summary;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUrl:(id)a0;

@end
