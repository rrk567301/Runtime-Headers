@class NSData, NSString;
@protocol ASExportViewControllerDelegate;

@interface ASExportViewController : NSViewController

@property (copy, nonatomic) NSData *exportedCredentialData;
@property (readonly, copy, nonatomic) NSString *exporterBundleID;
@property (weak, nonatomic) id<ASExportViewControllerDelegate> delegate;
@property (readonly, nonatomic) char didLaunchDestinationApp;

- (void).cxx_destruct;
- (id)initWithExportedCredentialData:(id)a0 exporterBundleID:(id)a1;

@end
