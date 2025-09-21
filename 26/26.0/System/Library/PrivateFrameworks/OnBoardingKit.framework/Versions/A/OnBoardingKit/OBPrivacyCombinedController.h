@class NSColor, NSString;

@interface OBPrivacyCombinedController : NSWindowController <OBPrivacyPresenting>

@property (retain, nonatomic) NSColor *customTintColor;
@property BOOL allowsOpeningSafari;
@property (retain) NSString *displayLanguage;
@property unsigned long long displayDeviceType;
@property BOOL presentedFromPrivacyPane;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)presentPrivacyCombinedControllerOnWindow:(id)a0 dismissHandler:(id /* block */)a1;
+ (void)presentPrivacyCombinedControllerOnWindow:(id)a0 identifiers:(id)a1 dismissHandler:(id /* block */)a2;

@end
