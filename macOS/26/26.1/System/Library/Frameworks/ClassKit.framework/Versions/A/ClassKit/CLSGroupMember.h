@class NSString;

@interface CLSGroupMember : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *personID;

+ (BOOL)supportsSecureCoding;
+ (id)relations;
+ (id)objectIDForGroupID:(id)a0 andPersonID:(id)a1;

- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
