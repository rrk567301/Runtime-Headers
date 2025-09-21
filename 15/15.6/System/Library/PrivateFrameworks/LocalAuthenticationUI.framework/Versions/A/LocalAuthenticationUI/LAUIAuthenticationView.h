@class NSImageView, NSString, LAUIAuthenticationCore, NSView, LAUIPKGlyphWrapper;
@protocol LAUIAuthenticationDelegate;

@interface LAUIAuthenticationView : NSView <LAUIAuthenticationCoreDelegate, LAUIAuthentication>

@property (readonly, nonatomic) LAUIAuthenticationCore *authenticationCore;
@property (readonly, nonatomic) LAUIPKGlyphWrapper *glyphWrapper;
@property (readonly, nonatomic) NSImageView *imageView;
@property (readonly, nonatomic) NSView *view;
@property (weak, nonatomic) id<LAUIAuthenticationDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic) char idleWhenDone;
@property (nonatomic) char fastAnimations;
@property (copy, nonatomic) NSString *authenticationHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultRect;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToSuperview:(id)a0;
- (id)callerIconBundlePath;
- (id)localizedCallerName;
- (id)localizedSubTitleForMechanisms:(unsigned long long)a0;
- (void)authenticationResult:(id)a0 error:(id)a1 context:(id)a2;
- (void)biometricNoMatch;
- (id)callerIconPath;
- (char)disableMechanism:(unsigned long long)a0 error:(id *)a1;
- (char)enableMechanism:(unsigned long long)a0 error:(id *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mechanisms:(unsigned long long)a1;
- (char)isMechanismEnabled:(unsigned long long)a0;
- (id)localizedAuthWatchPrompt;
- (void)_setupView;
- (long long)_stateOfSuccess;
- (void)_announceFailure:(id)a0;
- (id)_imageViewConstraintForAttribute:(long long)a0;
- (void)_showBiometry:(char)a0;
- (void)_updateUIActive:(char)a0;
- (void)biometryState:(long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithMechanisms:(unsigned long long)a0;
- (id)initWithMechanisms:(unsigned long long)a0 context:(id)a1;
- (char)isMechanismActive:(unsigned long long)a0;
- (char)isMechanismAvailable:(unsigned long long)a0 error:(id *)a1;
- (void)notification:(long long)a0 original:(id)a1 mechanism:(unsigned long long)a2;
- (void)watchState:(long long)a0 completionHandler:(id /* block */)a1;

@end
