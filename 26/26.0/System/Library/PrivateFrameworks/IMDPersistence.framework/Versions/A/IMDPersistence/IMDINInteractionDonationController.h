@class INImage, NSString;

@interface IMDINInteractionDonationController : NSObject <IMDIndexingIntegration>

@property (readonly, nonatomic) INImage *buildingSilhouette;
@property (readonly, nonatomic) BOOL isIntegrationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_createSOSImage;
- (id)createImageForNickname:(id)a0;
- (id)createInteractionWithContext:(id)a0 updateHandler:(id /* block */)a1;
- (id)createPersonFromHandle:(id)a0 contact:(id)a1 context:(id)a2 interactionUpdatedHandler:(id /* block */)a3;
- (id)createPersonHandleFromHandle:(id)a0 contact:(id)a1;
- (id)messageIndexingJobWithSize:(long long)a0 context:(id)a1 timingCollection:(id)a2;

@end
