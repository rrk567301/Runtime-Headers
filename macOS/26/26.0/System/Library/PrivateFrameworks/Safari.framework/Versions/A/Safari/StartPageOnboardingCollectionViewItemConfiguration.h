@class NSString, NSURL, NSView;

@interface StartPageOnboardingCollectionViewItemConfiguration : NSObject <WBSOnboardingProvider> {
    void /* unknown type, empty encoding */ stateProvider;
    void /* unknown type, empty encoding */ artworkType;
    void /* function */ textHeading;
    void /* function */ textDescription;
    void /* function */ linkText;
    void /* unknown type, empty encoding */ linkURL;
    void /* function */ imageOverlayProvider;
    void /* function */ buttonTitle;
    void /* function */ buttonSymbolName;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSString *textHeading;
@property (nonatomic, readonly) NSString *textDescription;
@property (nonatomic, copy) NSString *linkText;
@property (nonatomic, copy) NSURL *linkURL;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) NSView *artworkView;
@property (nonatomic, copy) id /* block */ imageOverlayProvider;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) NSString *buttonSymbolName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 stateProvider:(id /* block */)a1 textHeading:(id)a2 textDescription:(id)a3 artworkView:(id)a4 buttonTitle:(id)a5;
- (id)initWithIdentifier:(id)a0 stateProvider:(id /* block */)a1 textHeading:(id)a2 textDescription:(id)a3 imageName:(id)a4 buttonTitle:(id)a5;
- (id)initWithIdentifier:(id)a0 stateProvider:(id /* block */)a1 textHeading:(id)a2 textDescription:(id)a3 linkText:(id)a4 linkURL:(id)a5 imageName:(id)a6 buttonTitle:(id)a7;

@end
