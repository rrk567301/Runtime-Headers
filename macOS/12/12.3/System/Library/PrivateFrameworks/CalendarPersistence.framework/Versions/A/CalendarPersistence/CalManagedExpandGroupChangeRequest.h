@class NSString, NSDate;

@interface CalManagedExpandGroupChangeRequest : CalManagedChangeRequest

@property (retain) NSString *groupIdentifier;
@property (retain) NSDate *exceptionDate;

+ (id)insertExpandGroupRequestForGroupIdentifier:(id)a0 withExceptionDate:(id)a1 forLocalUID:(id)a2 sharedUID:(id)a3 sourceUID:(id)a4 inManagedObjectContext:(id)a5;

@end
