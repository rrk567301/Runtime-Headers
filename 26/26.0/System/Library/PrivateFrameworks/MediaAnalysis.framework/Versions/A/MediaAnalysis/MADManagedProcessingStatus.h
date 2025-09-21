@class NSString, NSDate;

@interface MADManagedProcessingStatus : NSManagedObject

@property (nonatomic) int attemptCount;
@property (nonatomic) unsigned long long errorCode;
@property (nonatomic) unsigned long long errorLine;
@property (copy, nonatomic) NSDate *lastAttemptDate;
@property (copy, nonatomic) NSString *localIdentifier;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long mediaSubtypes;
@property (copy, nonatomic) NSDate *nextAttemptDate;
@property (nonatomic) long long status;
@property (nonatomic) long long taskID;

+ (id)fetchRequest;
+ (id)assetTypePredicatesStringWithMediaType:(long long)a0 mediaSubtypes:(unsigned long long)a1;
+ (id)attemptCountColumnName;
+ (id)errorCodeColumnName;
+ (id)errorLineColumnName;
+ (int)fetchFirstManagedProcessingStatus:(id *)a0 predicate:(id)a1 managedObjectContext:(id)a2;
+ (int)fetchManagedProcessingStatus:(id *)a0 taskID:(unsigned long long)a1 localIdentifier:(id)a2 managedObjectContext:(id)a3;
+ (int)fetchManagedProcessingStatusBatch:(id *)a0 predicate:(id)a1 fetchLimit:(id)a2 sortDescriptors:(id)a3 managedObjectContext:(id)a4;
+ (BOOL)isMACDPersistEnabled;
+ (BOOL)isMACDReadEnabled;
+ (id)lastAttemptDateColumnName;
+ (id)localIdentifierColumnName;
+ (id)mediaSubtypesColumnName;
+ (id)mediaTypeColumnName;
+ (id)nextAttemptDateColumnName;
+ (id)statusColumnName;
+ (id)taskIDColumnName;

@end
