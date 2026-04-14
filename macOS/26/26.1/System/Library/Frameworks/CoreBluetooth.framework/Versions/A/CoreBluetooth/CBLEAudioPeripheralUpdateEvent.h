@class NSNumber, NSError;

@interface CBLEAudioPeripheralUpdateEvent : NSObject

@property (readonly, nonatomic) long long eventType;
@property (readonly, copy, nonatomic) NSNumber *updatedValue;
@property (readonly, copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithEventType:(long long)a0;
- (id)initWithError:(long long)a0 withError:(id)a1;
- (id)initWithValue:(long long)a0 withValue:(id)a1;

@end
