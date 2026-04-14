@class NSString, NSArray, _TtC12SmartReplies22SRSmartRepliesChatInfo, NSDate;

@interface SROSmartRepliesChatInfo : NSObject {
    _TtC12SmartReplies22SRSmartRepliesChatInfo *_info;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSDate *messageDate;
@property (copy, nonatomic) NSArray *outGoingMessageHistory;
@property (copy, nonatomic) NSString *keyboardLanguageID;
@property (copy, nonatomic) NSString *senderID;
@property (copy, nonatomic) NSDate *keyboardLanguageLastChangedDate;
@property (nonatomic) BOOL includeDynamicSuggestions;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
