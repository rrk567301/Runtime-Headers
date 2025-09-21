@class NSString;

@interface CLSCollectionItem : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *referenceObjectID;
@property (nonatomic) unsigned long long displayOrder;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)_init;
- (id)initWithContext:(id)a0;
- (id)initWithType:(long long)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)validateObject:(id *)a0;
- (id)initWithHandout:(id)a0;
- (id)initWithQuestionStep:(id)a0;
- (void)mergeWithObject:(id)a0;

@end
