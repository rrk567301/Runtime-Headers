@class NSString, ABCDInfo, NSSet, CNCDContact, NSDate;

@interface CNCDContainer : ABCDRecord

@property (retain, nonatomic) CNCDContact *me;
@property (retain, nonatomic) ABCDInfo *info;
@property (retain, nonatomic) NSString *remoteLocation;
@property (retain, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (nonatomic) unsigned short guardianFlags;
@property (retain, nonatomic) NSSet *contacts;
@property (retain, nonatomic) NSSet *deletedRecords;
@property (retain, nonatomic) NSSet *groups;

+ (id)_table;
+ (id)abEntityName;
+ (BOOL)_isPublicRecord;
+ (id)containerWithManagedObjectContext:(id)a0 store:(id)a1;

- (id)description;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)validateForDelete:(id *)a0;
- (BOOL)validateForGuardianRestrictions:(id *)a0;
- (id)parentGroups;

@end
