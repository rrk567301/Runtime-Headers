@class NSString;

@interface SmartReplies.SRSmartRepliesSuggestion : NSObject {
    void /* unknown type, empty encoding */ title;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isDynamicReply;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 isDynamicReply:(BOOL)a1;

@end
