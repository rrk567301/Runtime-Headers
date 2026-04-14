@class NSUUID, NSString, NSDate;

@interface HMDActionSetNotificationRegistration : HMFObject

@property (readonly) NSUUID *actionSetUUID;
@property (readonly, copy) NSString *deviceIdsDestination;
@property (readonly) NSUUID *userUUID;
@property (readonly) NSDate *lastModified;
@property (readonly) BOOL enabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithActionSetUUID:(id)a0 deviceIdsDestination:(id)a1 userUUID:(id)a2 lastModified:(id)a3 enabled:(BOOL)a4;

@end
