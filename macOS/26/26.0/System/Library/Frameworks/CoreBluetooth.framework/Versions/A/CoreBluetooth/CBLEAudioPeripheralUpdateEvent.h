@class NSNumber, NSError;

@interface CBLEAudioPeripheralUpdateEvent : NSObject

@property (readonly, nonatomic) long long eventType;
@property (readonly, copy, nonatomic) NSNumber *updatedValue;
@property (readonly, copy, nonatomic) NSError *error;

- (id)initWithEventType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithError:(long long)a0 withError:(id)a1;
- (id)initWithValue:(long long)a0 withValue:(id)a1;

@end
