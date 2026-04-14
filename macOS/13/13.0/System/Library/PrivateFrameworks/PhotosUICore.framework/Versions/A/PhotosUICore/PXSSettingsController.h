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
- (id)initWithWindow:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)_save;
- (id)initWithRootSettings:(id)a0;
- (id)initWithRootModuleController:(id)a0;
- (void)_warnForSettingsOverride;
- (void)_clearSettingsOverride;

@end
