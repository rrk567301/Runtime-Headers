@class NSUUID, NSString, STAttributedEntity;

@interface STActivityAttribution : NSObject <BSDebugDescriptionProviding, NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=UUID) NSUUID *UUID;
@property (readonly, copy, nonatomic) STAttributedEntity *attributedEntity;
@property (readonly, copy, nonatomic) STAttributedEntity *activeEntity;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, nonatomic) int pid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributionWithPID:(int)a0;
+ (id)attributionWithAuditToken:(struct { unsigned int x0[8]; })a0;

- (id)initWithPID:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttributedEntity:(id)a0;
- (id)initWithAttributedEntity:(id)a0 activeEntity:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)_isEquivalentForBookkeepingPurposesToActivityAttribution:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)_initWithAttributedEntity:(id)a0 activeEntity:(id)a1 UUID:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)copyReplacingAttributedEntity:(id)a0 activeEntity:(id)a1;
- (void).cxx_destruct;

@end
