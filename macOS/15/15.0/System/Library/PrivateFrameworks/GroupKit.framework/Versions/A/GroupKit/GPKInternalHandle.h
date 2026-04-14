@class NSString, GPKInternalUser, NSDate;

@interface GPKInternalHandle : NSManagedObject

@property (nonatomic) float clientModelVersion;
@property (nonatomic, copy) NSString *handleString;
@property (nonatomic, copy) NSDate *lastFetchDate;
@property (nonatomic, retain) GPKInternalUser *user;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
