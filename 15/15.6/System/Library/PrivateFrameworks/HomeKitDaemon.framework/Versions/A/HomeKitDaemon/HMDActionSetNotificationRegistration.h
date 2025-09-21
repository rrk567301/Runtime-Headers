@class NSUUID, NSString, NSDate;

@interface HMDActionSetNotificationRegistration : HMFObject

@property (readonly) NSUUID *actionSetUUID;
@property (readonly, copy) NSString *deviceIdsDestination;
@property (readonly) NSUUID *userUUID;
@property (readonly) NSDate *lastModified;
@property (readonly) char enabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithActionSetUUID:(id)a0 deviceIdsDestination:(id)a1 userUUID:(id)a2 lastModified:(id)a3 enabled:(char)a4;

@end
