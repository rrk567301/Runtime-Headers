@class NSString, NSDictionary, NSDate, NSManagedObjectID;

@interface EKFrozenSuggestedEventInfo : EKFrozenObject <EKProtocolSuggestedEventInfo>

@property (nonatomic) unsigned long long changedFields;
@property (readonly, copy, nonatomic) NSString *opaqueKey;
@property (retain, nonatomic) NSDate *timestampAsDate;
@property (readonly, copy, nonatomic) NSString *uniqueKey;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)meltedClass;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 createPartialObject:(BOOL)a1 preFrozenRelationshipObjects:(id)a2;

@end
