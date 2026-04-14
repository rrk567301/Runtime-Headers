@class NSMutableArray;

@interface CRKInterfaceOrientationMonitor : NSObject {
    NSMutableArray *mCompletionBlocks;
    BOOL mIsWaitingForFirstUpdate;
}

@property (nonatomic) unsigned long long interfaceOrientation;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)interfaceOrientationWithCompletion:(id /* block */)a0;

@end
