@class NSArray, NSSet;

@interface HMAssistantAccessControl : HMAccessControl <NSSecureCoding, NSCopying, NSMutableCopying> {
    unsigned long long _options;
    NSSet *_accessories;
    BOOL _activityNotificationsEnabledForPersonalRequests;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isEnabled) BOOL enabled;
@property (readonly) BOOL allowUnauthenticatedRequests;
@property (readonly, copy) NSArray *accessories;
@property (readonly, getter=areActivityNotificationsEnabledForPersonalRequests) BOOL activityNotificationsEnabledForPersonalRequests;

+ (id)shortDescription;
+ (BOOL)isAccessorySupported:(id)a0;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUser:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)options;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
