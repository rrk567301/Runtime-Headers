@class NSString, NSOrderedSet, StoredProofingSession;

@interface StoredProofingDisplayMessage : NSManagedObject

@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSOrderedSet *actions;
@property (nonatomic, retain) StoredProofingSession *proofingSession;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
