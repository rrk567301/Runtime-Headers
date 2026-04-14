@class NSString, NSManagedObjectID;

@interface CalOperation : NSObject

@property (retain) NSString *sessionID;
@property (retain) NSManagedObjectID *sessionIDAsObjectID;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)session;
- (id)initWithSessionID:(id)a0;
- (BOOL)executeInContext:(id)a0 error:(id *)a1;
- (id)debugTitle;

@end
