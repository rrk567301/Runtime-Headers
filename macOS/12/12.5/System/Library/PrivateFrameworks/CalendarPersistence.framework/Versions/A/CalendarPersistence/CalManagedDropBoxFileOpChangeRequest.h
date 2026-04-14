@class NSString;

@interface CalManagedDropBoxFileOpChangeRequest : CalManagedChangeRequest

@property (retain) NSString *attachmentName;

+ (id)insertUploadDropBoxFileRequestForFileName:(id)a0 forLocalUID:(id)a1 forSharedUID:(id)a2 fromSource:(id)a3 inManagedObjectContext:(id)a4;
+ (id)insertDeleteDropBoxFileRequestForFileName:(id)a0 forLocalUID:(id)a1 forSharedUID:(id)a2 fromSource:(id)a3 inManagedObjectContext:(id)a4;

@end
