@class NSArray, HMFUnfairLock, NSBundle;

@interface HMLocalization : NSObject {
    HMFUnfairLock *_lock;
    NSBundle *_bundle;
}

@property (readonly, copy) NSArray *stringTable;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)handleLocaleDidChange:(id)a0;
- (void)_updateLocalizedStrings;
- (id)getLocalizedString:(id)a0;
- (id)getLocalizedOrCustomString:(id)a0;

@end
