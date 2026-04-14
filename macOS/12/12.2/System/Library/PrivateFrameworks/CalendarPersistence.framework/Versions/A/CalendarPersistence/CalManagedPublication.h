@class NSString, CalManagedPublicationError, NSURL, NSDate, CalManagedNode;

@interface CalManagedPublication : CalManagedObject {
    BOOL _needsPublish;
}

@property BOOL hasAlarmFilter;
@property BOOL hasAttachmentFilter;
@property BOOL hasTaskFilter;
@property BOOL hasTextFilter;
@property BOOL isAutoPublished;
@property (retain) NSString *name;
@property (retain) NSURL *publicationURL;
@property (retain) NSDate *publishDate;
@property (retain) NSDate *requestDate;
@property (retain) NSString *uid;
@property (retain) CalManagedNode *node;
@property (retain) CalManagedPublicationError *lastError;
@property (readonly) NSString *filename;
@property (readonly) NSString *user;
@property (readonly) NSURL *subscriptionURL;
@property (readonly) NSURL *webpageURL;

+ (id)entityName;
+ (id)URLForPublicationWithBaseURL:(id)a0 user:(id)a1 filename:(id)a2;

- (id)password;
- (int)status;
- (void)publish;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (id)properties;
- (void)willRefresh:(BOOL)a0;
- (void)didSave;
- (id)publisher;
- (id)lastOperationError;
- (id)iCalendarDocument;
- (void)setNeedsPublish:(BOOL)a0;
- (id)publicationURL;
- (void)setPublicationURL:(id)a0;
- (void)setUser:(id)a0 password:(id)a1;

@end
