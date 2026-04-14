@class NSData, INIntent;
@protocol ATXLazyIntentDelegateProtocol;

@interface ATXLazyIntent : NSObject {
    INIntent *_intent;
    NSData *_intentData;
}

@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSData *intentData;
@property (weak, nonatomic) id<ATXLazyIntentDelegateProtocol> delegate;

- (void)handleMemoryPressure;
- (id)initWithIntent:(id)a0 intentData:(id)a1;
- (BOOL)isDeserialized;
- (id)_deserializeIntent;
- (id)initWithIntentData:(id)a0;
- (id)init;
- (id)initWithIntent:(id)a0;
- (void).cxx_destruct;

@end
