@class NSUUID, NSString, NSData;

@interface GroupKit.MetaData : NSManagedObject

@property (nonatomic) float clientModelVersion;
@property (nonatomic, copy) NSUUID *groupID;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSData *value;
@property (nonatomic) int version;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
