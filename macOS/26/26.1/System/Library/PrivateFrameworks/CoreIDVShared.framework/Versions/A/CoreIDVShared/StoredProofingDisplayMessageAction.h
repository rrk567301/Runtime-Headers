@class NSURL, NSString, StoredProofingDisplayMessage;

@interface StoredProofingDisplayMessageAction : NSManagedObject

@property (nonatomic) long long actionType;
@property (nonatomic, copy) NSURL *actionURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) StoredProofingDisplayMessage *displayMessage;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
