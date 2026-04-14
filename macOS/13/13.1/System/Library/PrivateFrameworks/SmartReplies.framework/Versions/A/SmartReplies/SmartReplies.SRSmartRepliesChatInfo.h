@class NSString, NSArray, NSDate;

@interface SmartReplies.SRSmartRepliesChatInfo : NSObject {
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ messageDate;
    void /* unknown type, empty encoding */ outgoingMessageHistory;
    void /* unknown type, empty encoding */ keyboardLanguageID;
    void /* unknown type, empty encoding */ senderID;
    void /* unknown type, empty encoding */ keyboardLanguageLastChangedDate;
}

@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSDate *messageDate;
@property (nonatomic, copy) NSArray *outgoingMessageHistory;
@property (nonatomic, copy) NSString *keyboardLanguageID;
@property (nonatomic, copy) NSString *senderID;
@property (nonatomic, copy) NSDate *keyboardLanguageLastChangedDate;
@property (nonatomic) void /* unknown type, empty encoding */ includeDynamicSuggestions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
