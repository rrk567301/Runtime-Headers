@class NSString, NSArray, NSData, NSUUID;

@interface VUIndexToken : NSManagedObject

@property (nonatomic) short client;
@property (nonatomic, copy) NSData *embedding;
@property (nonatomic, copy) NSString *revision;
@property (nonatomic, retain) NSArray *shape;
@property (nonatomic, copy) NSUUID *tag;
@property (nonatomic) short version;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
