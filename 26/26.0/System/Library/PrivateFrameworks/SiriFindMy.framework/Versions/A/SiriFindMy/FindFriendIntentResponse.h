@class SpeakableLocation, INFriendLocation;

@interface FindFriendIntentResponse : INIntentResponse

@property (nonatomic, retain) INFriendLocation *friendLocation;
@property (nonatomic, retain) SpeakableLocation *userLocation;
@property (nonatomic) long long code;

- (id)initWithBackingStore:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
