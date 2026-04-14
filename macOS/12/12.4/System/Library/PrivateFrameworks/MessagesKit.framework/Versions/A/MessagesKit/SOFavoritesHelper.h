@interface SOFavoritesHelper : SOHelper

+ (id)bundleName;
+ (id)weakSharedInstance;

- (void)setValue:(id)a0 forControllerKey:(id)a1;
- (id)faceTimeDNDMenuOptions;
- (id)selectedFaceTimeDNDMenuOption;
- (id)selectedFaceTimeDNDMenuOptionBlocking;
- (BOOL)faceTimeDNDEnabled;
- (BOOL)allowTwoTimeCallthrough;
- (id)faceTimeDNDMenuOptionsBlocking;
- (unsigned long long)selectedFaceTimeDNDMenuOptionValue;
- (unsigned long long)selectedFaceTimeDNDMenuOptionValueBlocking;
- (void)setSelectedFaceTimeDNDMenuOption:(unsigned long long)a0;
- (BOOL)faceTimeDNDEnabledBlocking;
- (void)setFaceTimeDNDEnabled:(BOOL)a0;
- (BOOL)allowTwoTimeCallthroughBlocking;
- (void)setAllowTwoTimeCallthrough:(BOOL)a0;

@end
