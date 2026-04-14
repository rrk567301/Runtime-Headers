@class NSData, INIntent;
@protocol ATXLazyIntentDelegateProtocol;

@interface ATXLazyIntent : NSObject {
    INIntent *_intent;
    NSData *_intentData;
}

@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSData *intentData;
@property (weak, nonatomic) id<ATXLazyIntentDelegateProtocol> delegate;

- (id)initWithIntent:(id)a0;
- (BOOL)isDeserialized;
- (id)initWithIntent:(id)a0 intentData:(id)a1;
- (id)_deserializeIntent;
- (id)initWithIntentData:(id)a0;
- (void).cxx_destruct;
- (void)handleMemoryPressure;
- (id)init;

@end
