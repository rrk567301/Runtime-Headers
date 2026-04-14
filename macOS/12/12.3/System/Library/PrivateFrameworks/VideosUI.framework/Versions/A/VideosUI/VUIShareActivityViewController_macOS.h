@class NSString;

@interface VUIShareActivityViewController_macOS : NSObject <NSSharingServicePickerDelegate, NSSharingServiceDelegate>

@property (retain, nonatomic) NSString *itemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_resizeImage:(id)a0 toNewSize:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingService:(id)a0 willShareItems:(id)a1;
- (void)shareMediaItem:(id)a0 title:(id)a1 subtitle:(id)a2 imageURLStr:(id)a3 sharedWatchId:(id)a4 sharedWatchUrl:(id)a5 sourceView:(id)a6 relativePosition:(struct CGPoint { double x0; double x1; })a7;
- (void)shareMediaWithShareSheet:(id)a0 relativePosition:(struct CGPoint { double x0; double x1; })a1;

@end
