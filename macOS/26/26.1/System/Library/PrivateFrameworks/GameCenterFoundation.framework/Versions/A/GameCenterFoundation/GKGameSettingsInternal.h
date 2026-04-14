@class NSString;

@interface GKGameSettingsInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) long long allowFriendListAccess;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allowFriendListAccessString;
- (id)serverAllowFriendListAccessValue;

@end
