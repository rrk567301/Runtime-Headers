@class DNDBypassSettings, NSMutableSet;

@interface DNDSenderConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSMutableSet *allowedContactTypes;
@property (readonly, copy, nonatomic) NSMutableSet *deniedContactTypes;
@property (readonly, copy, nonatomic) NSMutableSet *allowedContactGroups;
@property (readonly, copy, nonatomic) NSMutableSet *deniedContactGroups;
@property (readonly, copy, nonatomic) NSMutableSet *allowedContacts;
@property (readonly, copy, nonatomic) NSMutableSet *deniedContacts;
@property (readonly, copy, nonatomic) DNDBypassSettings *phoneCallBypassSettings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)_descriptionForRedacted:(char)a0;
- (id)_evaluatedBypassSettings:(id)a0;
- (id)_initWithAllowedContactTypes:(id)a0 deniedContactTypes:(id)a1 allowedContactGroups:(id)a2 deniedContactGroups:(id)a3 allowedContacts:(id)a4 deniedContacts:(id)a5 phoneCallBypassSettings:(id)a6;
- (id)_redactedDescriptionsForContacts:(id)a0;
- (void)diffAgainstObject:(id)a0 usingDiffBuilder:(id)a1 withDescription:(id)a2;

@end
