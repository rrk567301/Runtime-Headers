@class NSString, NSUUID, LNEntityIdentifier;

@interface LNTranscriptMatchingPredicate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSUUID *executionUUID;
@property (readonly, copy, nonatomic) LNEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSString *actionType;
@property (readonly, copy, nonatomic) NSString *entityType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 type:(long long)a1 executionUUID:(id)a2 entityIdentifier:(id)a3 actionType:(id)a4 entityType:(id)a5;

@end
