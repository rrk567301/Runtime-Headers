@class WFDatabase, NSSet, NSString, NSFetchRequest, NSEntityDescription;

@interface WFCoreDataDatabaseResultFetchRequestOperation : NSObject <WFDatabaseResultLoader>

@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) NSFetchRequest *fetchRequest;
@property (readonly, nonatomic) NSEntityDescription *entity;
@property (readonly, nonatomic) NSSet *relationshipKeysAffectingDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)loadDescriptorsWithState:(id *)a0 error:(id *)a1;
- (unsigned long long)countForResult;
- (id)initWithDatabase:(id)a0 fetchRequest:(id)a1 relationshipKeysAffectingDescriptors:(id)a2;

@end
