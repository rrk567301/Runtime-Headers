@class NSData, NSString, StoredPayload;

@interface StoredIdentifierRevocationList : NSManagedObject

@property (nonatomic, copy) NSData *certificate;
@property (nonatomic, copy) NSData *identifier;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, retain) StoredPayload *payload;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
