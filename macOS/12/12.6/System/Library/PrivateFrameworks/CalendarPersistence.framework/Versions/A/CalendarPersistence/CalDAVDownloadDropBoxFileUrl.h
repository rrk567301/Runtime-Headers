@class NSURL, NSManagedObjectID;

@interface CalDAVDownloadDropBoxFileUrl : NSObject

@property (retain) NSURL *url;
@property (retain) NSManagedObjectID *managedObjectID;
@property BOOL isAttachment;

- (void).cxx_destruct;
- (id)initWithUrl:(id)a0 managedObjectId:(id)a1;

@end
