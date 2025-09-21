@class NSData, INIntent;
@protocol ATXLazyIntentDelegateProtocol;

@interface ATXLazyIntent : NSObject {
    INIntent *_intent;
    NSData *_intentData;
}

@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSData *intentData;
@property (weak, nonatomic) id<ATXLazyIntentDelegateProtocol> delegate;

- (id)init;
- (void).cxx_destruct;
- (char)isDeserialized;
- (id)initWithIntent:(id)a0;
- (id)_deserializeIntent;
- (void)handleMemoryPressure;
- (id)initWithIntent:(id)a0 intentData:(id)a1;
- (id)initWithIntentData:(id)a0;

@end
