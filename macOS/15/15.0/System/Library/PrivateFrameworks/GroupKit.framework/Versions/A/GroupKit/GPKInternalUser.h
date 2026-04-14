@class NSString, NSSet, NSData, NSDate;

@interface GPKInternalUser : NSManagedObject

@property (nonatomic) float clientModelVersion;
@property (nonatomic) BOOL isMe;
@property (nonatomic, copy) NSData *keyBlob;
@property (nonatomic, copy) NSDate *lastFetchDate;
@property (nonatomic, copy) NSString *userID;
@property (nonatomic, retain) NSSet *handles;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
