@class NSString, NSSet, CalDAVSession, NSManagedObjectID;

@interface CalDAVCalendarSource : NSObject

@property (readonly, retain) NSManagedObjectID *objectID;
@property (readonly, retain) NSString *path;
@property (readonly, retain) NSString *uid;
@property (readonly, retain) NSSet *capabilities;
@property (readonly, weak) CalDAVSession *session;

- (void).cxx_destruct;
- (BOOL)hasCapability:(id)a0;
- (id)initWithSession:(id)a0 calendar:(id)a1;
- (void)setupCapabilitiesForSession:(id)a0 calendar:(id)a1;
- (void)processResourcesFromServer:(id)a0 failedResources:(id)a1 inManagedObjectContext:(id)a2;
- (void)operation:(id)a0 deleteResourcesWithFilenames:(id)a1;
- (void)processResourcesFromServer:(id)a0 inManagedObjectContext:(id)a1;
- (void)operation:(id)a0 processResources:(id)a1 inManagedObjectContext:(id)a2;
- (void)processGetData:(id)a0 inManagedObjectContext:(id)a1;

@end
