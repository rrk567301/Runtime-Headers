@class NSString, ABCDInfo, NSSet, CNCDContact, NSDate, CNCDProviderMetadata;

@interface CNCDContainer : ABCDRecord

@property (retain, nonatomic) CNCDContact *me;
@property (retain, nonatomic) ABCDInfo *info;
@property (nonatomic) unsigned short type;
@property (retain, nonatomic) NSString *remoteLocation;
@property (retain, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (nonatomic) unsigned short guardianFlags;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NSSet *contacts;
@property (retain, nonatomic) NSSet *deletedRecords;
@property (retain, nonatomic) NSSet *groups;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) CNCDProviderMetadata *providerMetadata;

+ (char)_isPublicRecord;
+ (id)_table;
+ (id)abEntityName;
+ (id)containerWithManagedObjectContext:(id)a0 store:(id)a1;

- (id)description;
- (char)validateForDelete:(id *)a0;
- (char)validateForInsert:(id *)a0;
- (char)validateForUpdate:(id *)a0;
- (id)parentGroups;
- (char)validateForGuardianRestrictions:(id *)a0;

@end
