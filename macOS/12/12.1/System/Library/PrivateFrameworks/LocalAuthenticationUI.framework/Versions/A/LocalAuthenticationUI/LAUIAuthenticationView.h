@class NSImageView, LAPKGlyphWrapper, LAUIAuthenticationCore, NSView, NSString;
@protocol LAUIAuthenticationDelegate;

@interface LAUIAuthenticationView : NSView <LAUIAuthenticationCoreDelegate, LAUIAuthentication>

@property (readonly, nonatomic) LAUIAuthenticationCore *authenticationCore;
@property (readonly, nonatomic) LAPKGlyphWrapper *glyphWrapper;
@property (readonly, nonatomic) NSImageView *imageView;
@property (readonly, nonatomic) NSView *view;
@property (weak, nonatomic) id<LAUIAuthenticationDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic) BOOL idleWhenDone;
@property (nonatomic) BOOL fastAnimations;
@property (copy, nonatomic) NSString *authenticationHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultRect;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)a0;
- (id)callerIconBundlePath;
- (id)localizedCallerName;
- (BOOL)disableMechanism:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isMechanismEnabled:(unsigned long long)a0;
- (BOOL)enableMechanism:(unsigned long long)a0 error:(id *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mechanisms:(unsigned long long)a1;
- (void)authenticationResult:(id)a0 error:(id)a1 context:(id)a2;
- (void)biometricNoMatch;
- (id)localizedSubTitleForMechanisms:(unsigned long long)a0;
- (void)_setupView;
- (BOOL)isMechanismAvailable:(unsigned long long)a0 error:(id *)a1;
- (void)notification:(long long)a0 original:(id)a1 mechanism:(unsigned long long)a2;
- (void)biometryState:(long long)a0 completionHandler:(id /* block */)a1;
- (void)watchState:(long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithMechanisms:(unsigned long long)a0;
- (BOOL)isMechanismActive:(unsigned long long)a0;
- (void)_showBiometry:(BOOL)a0;
- (void)_updateUIActive:(BOOL)a0;
- (void)_announceFailure:(id)a0;
- (id)_imageViewConstraintForAttribute:(long long)a0;

@end
