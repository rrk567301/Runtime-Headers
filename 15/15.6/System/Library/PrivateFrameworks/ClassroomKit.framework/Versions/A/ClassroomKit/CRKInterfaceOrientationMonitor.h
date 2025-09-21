@class NSMutableArray;

@interface CRKInterfaceOrientationMonitor : NSObject {
    NSMutableArray *mCompletionBlocks;
    char mIsWaitingForFirstUpdate;
}

@property (nonatomic) unsigned long long interfaceOrientation;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)interfaceOrientationWithCompletion:(id /* block */)a0;

@end
