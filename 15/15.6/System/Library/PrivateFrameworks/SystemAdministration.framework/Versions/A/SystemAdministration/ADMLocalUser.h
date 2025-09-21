@class ADMSystem, NSString, NSUUID, NSData, ODRecord;

@interface ADMLocalUser : NSObject

@property (readonly, retain) ODRecord *record;
@property (readonly, copy) NSString *redactedDescription;
@property (readonly, retain) NSData *dataForClonedUser;
@property (readonly, retain) ODRecord *record;
@property (readonly, copy) NSString *redactedDescription;
@property (readonly, retain) NSData *dataForClonedUser;
@property (readonly, retain) ADMSystem *system;
@property (readonly) char isAdmin;
@property (readonly) char isOwner;
@property (readonly) char isAllowedSecureToken;
@property (readonly) char hasSecureToken;
@property (readonly, retain) NSUUID *uuid;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *fullname;
@property (readonly, retain) NSData *picture;
@property (readonly, copy) NSString *passwordHint;

+ (id)localUserWithRecord:(id)a0 onSystem:(id)a1;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (id)name;
- (id)uuid;
- (char)isOwner;
- (id)passwordHint;
- (id)picture;
- (char)isAdmin;
- (id)fullname;
- (char)hasSecureToken;
- (id)initWithRecord:(id)a0 onSystem:(id)a1;

@end
