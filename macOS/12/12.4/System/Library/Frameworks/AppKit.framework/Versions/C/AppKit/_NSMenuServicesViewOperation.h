@class NSString, _NSServiceEntry, NSImage, NSMutableArray;

@interface _NSMenuServicesViewOperation : NSOperation {
    NSMutableArray *objectsToNotify;
    NSMutableArray *completionBlocksToInvoke;
    NSImage *resultImage;
    BOOL imageIsLoaded;
}

@property (copy) NSString *path;
@property (retain) _NSServiceEntry *entry;

- (void)dealloc;
- (void)main;
- (void)finishedLoading:(id)a0;
- (void)addCompletionBlock:(id /* block */)a0;

@end
