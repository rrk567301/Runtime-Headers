@class NSArray, GPRecipe, NSString, GPAppleConnectTokenProvider;

@interface GPInProcessImagePickerViewController : NSViewController <GPImagePickerViewControllerProtocol> {
    void /* function */ selectedAssets;
    void /* unknown type, empty encoding */ servicesFetcher;
    void /* unknown type, empty encoding */ imagePickerViewController;
    void /* function */ localizedCreateButtonTitle;
}

@property (class, nonatomic, readonly) BOOL available;

@property (nonatomic) long long style;
@property (nonatomic, copy) NSArray *selectedAssets;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, retain) GPAppleConnectTokenProvider *appleConnectTokenProvider;
@property (nonatomic) BOOL isLoadingRecipe;
@property (nonatomic, retain) GPRecipe *recipe;
@property (nonatomic, copy) NSString *localizedCreateButtonTitle;

+ (BOOL)isAvailableOnCurrentDevice;

- (id)initWithStyle:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)closeComposingViewIfNeeded;
- (void)delegate:(id)a0 didDismissPickerWithStagedAssets:(id)a1;
- (void)delegate:(id)a0 didStageAssetWithIdentifier:(id)a1;
- (void)delegate:(id)a0 didUnstageAssetWithIdentifier:(id)a1;

@end
