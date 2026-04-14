@class NSString, NSArray;

@interface AXFOffscreenTracker : NSObject <AXFScreenManagerObserving>

@property (retain) NSString *replacementText;
@property (retain) NSArray *screenRects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_getOrCreateThreadCache;
- (id)_populateElementInfoForUIElement:(id)a0;
- (void)_updateScreenRects;
- (id)initWithReplacementText:(id)a0;
- (BOOL)isOffscreenForUIElement:(id)a0;
- (void)screenManager:(id)a0 screensChanged:(id)a1;
- (id)valueForOffscreenAttribute:(id)a0 element:(id)a1 overrideValue:(BOOL *)a2;

@end
