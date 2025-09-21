@class NSMutableArray, NSString, NSObject, CKContainer;
@protocol OS_dispatch_queue, WBSAppleAccountInformationProviding;

@interface WBSCloudKitContainerManateeObserver : NSObject <WBSCloudKitContainerManateeObserving> {
    NSObject<OS_dispatch_queue> *_queue;
    CKContainer *_container;
    char _determiningManateeState;
    long long _currentManateeState;
    long long _currentAccountTermsState;
    id /* block */ _stateChangeObserver;
    NSMutableArray *_stateDeterminationCompletionBlocks;
    id<WBSAppleAccountInformationProviding> _appleAccountInformationProvider;
}

@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (copy, nonatomic) id /* block */ stateChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_accountChanged:(id)a0;
- (void)determineAccountStateWithCompletion:(id /* block */)a0;
- (id)initWithContainerIdentifier:(id)a0 appleAccountInformationProvider:(id)a1;
- (void)_determineAccountStateWithCompletion:(id /* block */)a0;

@end
