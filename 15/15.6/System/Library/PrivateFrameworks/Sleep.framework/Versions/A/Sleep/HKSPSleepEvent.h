@class NSString, NSDictionary, NSDate;
@protocol HKSPSyncAnchor;

@interface HKSPSleepEvent : NSObject <BSDescriptionProviding, NAEquatable, NAHashable, HKSPXPCObject, HKSPDictionarySerializable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isUserVisible;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *dueDate;
@property (readonly, copy, nonatomic) NSDictionary *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;

+ (id)sleepEventWithIdentifier:(id)a0 dueDate:(id)a1;
+ (id)sleepEventWithIdentifier:(id)a0 dueDate:(id)a1 context:(id)a2;
+ (id)sleepEventWithIdentifier:(id)a0 dueDate:(id)a1 context:(id)a2 type:(unsigned long long)a3 expirationDate:(id)a4 isUserVisible:(char)a5;
+ (id)sleepEventWithIdentifier:(id)a0 dueDate:(id)a1 expirationDate:(id)a2 isUserVisible:(char)a3;
+ (id)sleepEventWithIdentifier:(id)a0 dueDate:(id)a1 isUserVisible:(char)a2;
+ (id)sleepEventWithIdentifier:(id)a0 dueDate:(id)a1 type:(unsigned long long)a2;
+ (id)sleepEventWithIdentifier:(id)a0 dueDate:(id)a1 type:(unsigned long long)a2 expirationDate:(id)a3 isUserVisible:(char)a4;
+ (id)sleepEventWithIdentifier:(id)a0 dueDate:(id)a1 type:(unsigned long long)a2 isUserVisible:(char)a3;
+ (id)standardEventIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithIdentifier:(id)a0 dueDate:(id)a1 context:(id)a2 type:(unsigned long long)a3 expirationDate:(id)a4 isUserVisible:(char)a5;
- (char)isExpired:(id)a0;
- (id)objectWithSyncAnchor:(id)a0;

@end
