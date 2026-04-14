@class CalManagedCalDAVPrincipal, CalManagedChangeRequest;

@interface CalManagedCalDAVError : CalManagedError

@property (retain) CalManagedChangeRequest *changeRequest;
@property (retain) CalManagedCalDAVPrincipal *principal;

+ (id)entityName;

- (id)copyScrubbedUserInfoForError:(id)a0;
- (id)copyUnscrubbedUserInfoForError:(id)a0;

@end
