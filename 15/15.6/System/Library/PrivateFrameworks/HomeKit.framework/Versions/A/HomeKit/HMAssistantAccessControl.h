@class NSArray, NSSet;

@interface HMAssistantAccessControl : HMAccessControl <NSSecureCoding, NSCopying, NSMutableCopying> {
    unsigned long long _options;
    NSSet *_accessories;
    char _activityNotificationsEnabledForPersonalRequests;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, getter=isEnabled) char enabled;
@property (readonly) char allowUnauthenticatedRequests;
@property (readonly, copy) NSArray *accessories;
@property (readonly, getter=areActivityNotificationsEnabledForPersonalRequests) char activityNotificationsEnabledForPersonalRequests;

+ (id)shortDescription;
+ (char)isAccessorySupported:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)options;
- (id)initWithUser:(id)a0;
- (id)shortDescription;
- (id)descriptionWithPointer:(char)a0;

@end
