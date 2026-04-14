@class NSObject;
@protocol OS_dispatch_queue;

@interface WBSDownloadFileUnarchiver : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (readonly, nonatomic) BOOL canInterruptUnarchiving;

- (void).cxx_destruct;
- (id)init;
- (void)_unarchiveFileWithSubpath:(id)a0 inDirectoryWithFileHandle:(id)a1 completionHandler:(id /* block */)a2;
- (void)interruptUnarchiving;
- (void)unarchiveFileWithSubpath:(id)a0 inDirectoryWithFileHandle:(id)a1 completionHandler:(id /* block */)a2;

@end
