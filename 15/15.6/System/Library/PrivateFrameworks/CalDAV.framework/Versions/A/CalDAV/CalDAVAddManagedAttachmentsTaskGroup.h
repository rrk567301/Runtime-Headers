@class NSMutableDictionary, NSDictionary, NSURL, NSData, NSString;

@interface CalDAVAddManagedAttachmentsTaskGroup : CoreDAVTaskGroup {
    NSURL *_postURLWithQuery;
}

@property (nonatomic) int state;
@property (retain, nonatomic) NSURL *resourceURL;
@property (retain, nonatomic) NSDictionary *attachments;
@property (retain, nonatomic) NSDictionary *contentTypes;
@property (retain, nonatomic) NSMutableDictionary *filenamesToServerLocation;
@property (retain, nonatomic) NSData *updatedResourcePayload;
@property (nonatomic) char hadPreconditionFailure;
@property (retain, nonatomic) NSString *updatedETag;
@property (retain, nonatomic) NSString *updatedScheduleTag;
@property (retain, nonatomic) NSDictionary *postFailureSizes;
@property (retain, nonatomic) NSString *previousETag;
@property (retain, nonatomic) NSString *previousScheduleTag;

- (void).cxx_destruct;
- (void)_fetchUpdatedContent;
- (void)_finishWithError:(id)a0 state:(int)a1;
- (void)_handlePostResponse:(id)a0;
- (char)_postedLastAttachment;
- (void)_sendAttachments;
- (id)initWithAccountInfoProvider:(id)a0 resourceURL:(id)a1 attachments:(id)a2 contentTypes:(id)a3 taskManager:(id)a4;
- (void)startTaskGroup;
- (id)urlWithQuery;

@end
