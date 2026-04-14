@interface SOFavoritesHelper : SOHelper

+ (id)bundleName;
+ (id)weakSharedInstance;

- (void)setValue:(id)a0 forControllerKey:(id)a1;
- (id)faceTimeDNDMenuOptions;
- (id)faceTimeDNDMenuOptionsBlocking;
- (unsigned long long)selectedFaceTimeDNDMenuOptionValue;
- (unsigned long long)selectedFaceTimeDNDMenuOptionValueBlocking;
- (id)selectedFaceTimeDNDMenuOption;
- (id)selectedFaceTimeDNDMenuOptionBlocking;
- (void)setSelectedFaceTimeDNDMenuOption:(unsigned long long)a0;
- (BOOL)faceTimeDNDEnabled;
- (BOOL)faceTimeDNDEnabledBlocking;
- (void)setFaceTimeDNDEnabled:(BOOL)a0;
- (BOOL)allowTwoTimeCallthrough;
- (BOOL)allowTwoTimeCallthroughBlocking;
- (void)setAllowTwoTimeCallthrough:(BOOL)a0;

@end
