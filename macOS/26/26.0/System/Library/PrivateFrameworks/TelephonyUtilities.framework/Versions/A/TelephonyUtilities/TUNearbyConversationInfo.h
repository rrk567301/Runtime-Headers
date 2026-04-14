@class NSUUID, NSString, TUNearbyDeviceHandle, NSSet;

@interface TUNearbyConversationInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *conversationUUID;
@property (readonly, copy, nonatomic) NSString *userProfileIdentifier;
@property (readonly, copy, nonatomic) TUNearbyDeviceHandle *deviceHandle;
@property (readonly, nonatomic) unsigned long long avMode;
@property (readonly, copy, nonatomic) NSSet *supportedHandoffTypes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConversationUUID:(id)a0 userProfileIdentifier:(id)a1 deviceHandle:(id)a2 avMode:(unsigned long long)a3 supportedHandoffTypes:(id)a4;
- (BOOL)isEqualToConversationInfo:(id)a0;

@end
