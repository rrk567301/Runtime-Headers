@class NSString;

@interface CalManagedDeleteDropBoxChangeRequest : CalManagedChangeRequest

@property (retain) NSString *dropBoxUri;

+ (id)insertDeleteDropBoxRequestForDropBoxUri:(id)a0 forLocalUID:(id)a1 sharedUID:(id)a2 sourceUID:(id)a3 inManagedObjectContext:(id)a4;

@end
