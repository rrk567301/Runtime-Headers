@class NSString, NSData, CalManagedExchangePrincipal, CalManagedExchangeError;

@interface CalManagedPersistentOperation : CalManagedObject

@property long long sequenceNumber;
@property (retain) NSData *data;
@property (retain) CalManagedExchangePrincipal *principal;
@property (retain) CalManagedExchangeError *error;
@property (retain) NSString *sessionID;

+ (id)entityName;
+ (id)insertOperationWithData:(id)a0 inManagedObjectContext:(id)a1;

- (long long)_nextSequenceNumber;

@end
