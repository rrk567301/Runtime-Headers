@class NSArray, NSImage, GPRecipe, NSString, GPAppleConnectTokenProvider;

@interface GPInProcessImageEditionViewController : NSViewController <GPImageEditionViewControllerProtocol> {
    void /* function */ generatedAssets;
    void /* function */ localizedCreateButtonTitle;
    void /* unknown type, empty encoding */ servicesFetcher;
    void /* unknown type, empty encoding */ imageEditionViewController;
}

@property (class, nonatomic, readonly) BOOL available;

@property (nonatomic) long long style;
@property (nonatomic, copy) NSArray *generatedAssets;
@property (nonatomic, retain) NSImage *sourceImage;
@property (nonatomic) BOOL isLoadingRecipe;
@property (nonatomic, retain) GPRecipe *recipe;
@property (nonatomic) BOOL sourceImageIsSketch;
@property (nonatomic, copy) NSString *localizedCreateButtonTitle;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, retain) GPAppleConnectTokenProvider *appleConnectTokenProvider;

- (id)initWithStyle:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
