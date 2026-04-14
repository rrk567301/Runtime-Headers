@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface WBSDownloadFileUnarchiver : NSObject

@property (copy, nonatomic) NSString *sourcePath;
@property (copy) NSString *destinationPath;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (readonly, nonatomic) BOOL canInterruptUnarchiving;

- (void).cxx_destruct;
- (id)initWithSourcePath:(id)a0;
- (void)unarchiveWithCompletionBlock:(id /* block */)a0;
- (void)unarchive;
- (void)interruptUnarchiving;
- (void)didFinishUnarchiving;
- (id)createTemporaryDirectory;
- (id)pickDestinationPath:(id)a0;

@end
