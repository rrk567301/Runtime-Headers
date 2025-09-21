@class NSProgress, NSManagedObjectContext;

@interface ICCryptoConvergenceController : NSObject

@property (class, retain, nonatomic) ICCryptoConvergenceController *sharedController;

@property (retain) NSProgress *progress;
@property (readonly, nonatomic) NSManagedObjectContext *workerContext;

- (void).cxx_destruct;
- (void)authenticationStateDidDeauthenticate:(id)a0;
- (void)cancelAndWaitWithReason:(id)a0;
- (char)convergeAttachmentsInNoteWithID:(id)a0 configuration:(id)a1;
- (char)convergeNotesInAccountWithID:(id)a0 configuration:(id)a1 progress:(id)a2;
- (id)initWithWorkerContext:(id)a0;
- (char)unsafelyConvergeAttachment:(id)a0 configuration:(id)a1;
- (char)unsafelyConvergeAttachmentsInNote:(id)a0 configuration:(id)a1;
- (char)unsafelyConvergeNote:(id)a0 configuration:(id)a1;
- (char)unsafelyConvergeNotesInAccount:(id)a0 configuration:(id)a1;

@end
