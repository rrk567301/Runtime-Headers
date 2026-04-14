@class NSArray;
@protocol NFCopying;

@interface NTNewsModuleDescriptorsOperation : NTTodayModuleDescriptorsOperation

@property (copy, nonatomic) NSArray *resultTodayModuleDescriptors;
@property (copy, nonatomic) id<NFCopying> prefetchedContent;

- (void)_donateTodayConfigDataToNewsd:(id)a0;
- (void)performOperation;
- (BOOL)validateOperation;
- (void)_continueOperationWithTodayData:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;

@end
