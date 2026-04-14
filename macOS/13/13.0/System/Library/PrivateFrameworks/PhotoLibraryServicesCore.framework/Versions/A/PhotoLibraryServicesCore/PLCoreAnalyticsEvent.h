@class NSDictionary, NSString, NSMutableDictionary;

@interface PLCoreAnalyticsEvent : NSObject {
    NSString *_event;
    NSMutableDictionary *_mutablePayload;
}

@property (readonly) NSDictionary *payload;

- (id)description;
- (void).cxx_destruct;
- (void)removeKey:(id)a0;
- (void)publish;
- (void)mergePayload:(id)a0;
- (id)initWithEvent:(id)a0 payload:(id)a1;
- (void)addKey:(id)a0 value:(id)a1;

@end
