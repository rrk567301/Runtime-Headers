@class NSString;

@interface FamilyCircle.RecordSharingMetadataEntity : NSManagedObject

@property (nonatomic, copy) NSString *cloudKitContainer;
@property (nonatomic, copy) NSString *recordZone;
@property (nonatomic) long long targetAudience;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
