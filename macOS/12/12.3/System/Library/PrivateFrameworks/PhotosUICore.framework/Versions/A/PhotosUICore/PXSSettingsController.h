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

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowWillClose:(id)a0;
- (id)initWithWindow:(id)a0;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)_save;
- (id)initWithRootModuleController:(id)a0;
- (void)_clearSettingsOverride;
- (void)_warnForSettingsOverride;
- (id)initWithRootSettings:(id)a0;

@end
