@class NSArray;
@protocol NFCopying;

@interface NTNewsModuleDescriptorsOperation : NTTodayModuleDescriptorsOperation

@property (copy, nonatomic) NSArray *resultTodayModuleDescriptors;
@property (copy, nonatomic) id<NFCopying> prefetchedContent;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)_continueOperationWithTodayData:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (void)_donateTodayConfigDataToNewsd:(id)a0;

@end
