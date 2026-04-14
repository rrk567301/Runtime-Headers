@class NSArray, NSDictionary, TUNearbyDeviceHandle;

@interface TUContinuitySessionInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TUNearbyDeviceHandle *device;
@property (readonly, nonatomic) NSArray *activeConversations;
@property (readonly, nonatomic) NSArray *recentCalls;
@property (readonly, nonatomic) NSDictionary *recentCallsContacts;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 activeConversations:(id)a1 recentCalls:(id)a2 recentCallsContacts:(id)a3;

@end
