@class NSProgress, NSString;
@protocol PXSharedLibrary;

@interface PXSharedLibraryExitAssistantContext : NSObject <PXSharedLibraryExitAssistantViewControllerDelegate, PXAssistantContext>

@property (nonatomic) long long exitRetentionPolicy;
@property (retain, nonatomic) NSProgress *activityProgress;
@property (readonly, nonatomic) id<PXSharedLibrary> sharedLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldConfirmCancellationOfAssistantForStepContextWithIdentifier:(id)a0;
- (void)stepContextWithIdentifier:(id)a0 confirmCancellationWithAlertProperties:(id /* block */)a1;
- (id)nextStepContextIdentifierFromStepContextIdentifier:(id)a0;
- (id)initialStepContextIdentifiers;
- (id)stepContextForStepContextIdentifier:(id)a0;
- (void)exitAssistantViewController:(id)a0 didSetExitRetentionPolicy:(long long)a1;
- (void)exitAssistantViewController:(id)a0 didSetActivityProgress:(id)a1;
- (id)initWithSharedLibrary:(id)a0 exitRetentionPolicy:(long long)a1;

@end
