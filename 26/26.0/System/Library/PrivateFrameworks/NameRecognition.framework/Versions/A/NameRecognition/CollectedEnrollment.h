@class NSString, NSUUID, NSData, NameConfiguration;

@interface CollectedEnrollment : NSManagedObject

@property (nonatomic, copy) NSString *audioSourceRawValue;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *audioData;
@property (nonatomic, retain) NameConfiguration *nameConfiguration;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
