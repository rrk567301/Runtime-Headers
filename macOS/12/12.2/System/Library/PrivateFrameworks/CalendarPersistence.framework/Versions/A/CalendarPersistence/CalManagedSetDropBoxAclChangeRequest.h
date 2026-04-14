@class NSString;

@interface CalManagedSetDropBoxAclChangeRequest : CalManagedChangeRequest

@property (retain) NSString *acl;

+ (id)insertSetDropBoxAclRequestWithAcl:(id)a0 forLocalUID:(id)a1 forSharedUID:(id)a2 fromSource:(id)a3 inManagedObjectContext:(id)a4;

@end
