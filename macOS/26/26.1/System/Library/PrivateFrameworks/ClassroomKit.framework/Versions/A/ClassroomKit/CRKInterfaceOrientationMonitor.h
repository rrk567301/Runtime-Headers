@class NSMutableArray;

@interface CRKInterfaceOrientationMonitor : NSObject {
    NSMutableArray *mCompletionBlocks;
    BOOL mIsWaitingForFirstUpdate;
}

@property (nonatomic) unsigned long long interfaceOrientation;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)interfaceOrientationWithCompletion:(id /* block */)a0;

@end
