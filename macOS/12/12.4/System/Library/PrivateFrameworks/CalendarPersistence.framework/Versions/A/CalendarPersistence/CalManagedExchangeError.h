@class CalManagedPersistentOperation, CalManagedExchangePrincipal;

@interface CalManagedExchangeError : CalManagedError

@property (retain) CalManagedPersistentOperation *operation;
@property (retain) CalManagedExchangePrincipal *principal;

+ (id)entityName;

- (id)copyScrubbedUserInfoForError:(id)a0;

@end
