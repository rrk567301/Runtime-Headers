@class NSArray, NSDictionary, TUNearbyDeviceHandle;

@interface TUContinuitySessionInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TUNearbyDeviceHandle *device;
@property (readonly, nonatomic) NSArray *calls;
@property (readonly, nonatomic) NSArray *activeConversations;
@property (readonly, nonatomic) NSArray *recentCalls;
@property (readonly, nonatomic) NSDictionary *recentCallsContacts;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 calls:(id)a1 activeConversations:(id)a2 recentCalls:(id)a3 recentCallsContacts:(id)a4;

@end
