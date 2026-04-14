@class NSString, NSUUID, LNEntityIdentifier, NSArray;

@interface LNTranscriptMatchingPredicate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSUUID *executionUUID;
@property (readonly, copy, nonatomic) LNEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSString *actionType;
@property (readonly, copy, nonatomic) NSString *entityType;
@property (readonly, copy, nonatomic) NSArray *executionUUIDs;
@property (readonly, copy, nonatomic) NSArray *entityIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 type:(long long)a1 executionUUID:(id)a2 entityIdentifier:(id)a3 actionType:(id)a4 entityType:(id)a5 executionUUIDs:(id)a6 entityIdentifiers:(id)a7;
- (id)initWithBundleIdentifier:(id)a0 type:(long long)a1 executionUUID:(id)a2 entityIdentifier:(id)a3 actionType:(id)a4 entityType:(id)a5;

@end
