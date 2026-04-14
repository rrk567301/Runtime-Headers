@class NSData, NSString;
@protocol ASExportViewControllerDelegate;

@interface ASExportViewController : NSViewController

@property (readonly, copy, nonatomic) NSData *exportedCredentialData;
@property (readonly, copy, nonatomic) NSString *exporterBundleID;
@property (weak, nonatomic) id<ASExportViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithExportedCredentialData:(id)a0 exporterBundleID:(id)a1;

@end
