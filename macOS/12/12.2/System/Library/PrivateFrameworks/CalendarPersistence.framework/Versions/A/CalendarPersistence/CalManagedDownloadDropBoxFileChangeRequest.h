@class NSString;

@interface CalManagedDownloadDropBoxFileChangeRequest : CalManagedChangeRequest

@property (retain) NSString *attachmentName;
@property BOOL isUserRequested;
@property BOOL isLastInBatch;

+ (id)insertDownloadDropBoxFileRequestForFileName:(id)a0 withEtag:(id)a1 forLocalUID:(id)a2 forSharedUID:(id)a3 fromSource:(id)a4 isUserRequested:(BOOL)a5 inManagedObjectContext:(id)a6;

@end
