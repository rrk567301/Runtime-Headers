@class NSString;

@interface CLSHandoutRecipient : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *classID;
@property (copy, nonatomic) NSString *personID;
@property (readonly, nonatomic) NSString *parentObjectID;

+ (char)supportsSecureCoding;
+ (id)relations;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (char)validateObject:(id *)a0;
- (id)initWithClassID:(id)a0 personID:(id)a1;

@end
