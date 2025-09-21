@class NSUUID, TUConversationActivity, TUNearbyDeviceHandle;

@interface TUNearbySuggestion : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) TUNearbyDeviceHandle *deviceHandle;
@property (readonly, nonatomic) TUConversationActivity *activity;
@property (readonly, nonatomic) long long type;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToSuggestion:(id)a0;
- (id)initWithIdentifier:(id)a0 deviceHandle:(id)a1 activity:(id)a2 type:(long long)a3;
- (char)isEquivalentToSuggestion:(id)a0;

@end
