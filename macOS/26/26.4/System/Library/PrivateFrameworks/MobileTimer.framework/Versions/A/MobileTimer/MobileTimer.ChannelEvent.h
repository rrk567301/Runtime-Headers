@interface MobileTimer.ChannelEvent : NSObject {
    void /* unknown type, empty encoding */ eventName;
    void /* unknown type, empty encoding */ payload;
}

+ (id)updateWithPayload:(id)a0;
+ (id)name:(long long)a0;
+ (id)deleteWithPayload:(id)a0;
+ (id)refreshWithPayload:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEventName:(id)a0 payload:(id)a1;

@end
