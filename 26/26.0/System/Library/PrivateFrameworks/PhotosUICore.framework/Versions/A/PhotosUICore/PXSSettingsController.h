@class PXSModuleController, NSString;

@interface PXSSettingsController : NSWindowController <PXSettingsKeyPathObserver, NSWindowDelegate>

@property (readonly, nonatomic) PXSModuleController *rootModuleController;
@property (nonatomic) BOOL willSave;
@property (copy, nonatomic) id /* block */ onWindowDidClose;
@property (nonatomic) BOOL hasWarnedForOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)windowDidBecomeKey:(id)a0;
- (void)_save;
- (void)windowWillClose:(id)a0;
- (id)init;
- (id)initWithWindow:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)_clearSettingsOverride;
- (void)_warnForSettingsOverride;
- (id)initWithRootModuleController:(id)a0;
- (id)initWithRootSettings:(id)a0;

@end
