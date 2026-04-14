@class NSData, NSUUID;

@interface GroupKit.CachedGroup : NSManagedObject

@property (nonatomic) float clientModelVersion;
@property (nonatomic, copy) NSData *groupBlob;
@property (nonatomic, copy) NSUUID *groupID;
@property (nonatomic) long long invitationGroupVersion;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
