@interface SOFavoritesHelper : SOHelper

+ (id)bundleName;
+ (id)weakSharedInstance;

- (char)allowTwoTimeCallthroughBlocking;
- (char)allowTwoTimeCallthrough;
- (char)faceTimeDNDEnabled;
- (char)faceTimeDNDEnabledBlocking;
- (id)faceTimeDNDMenuOptions;
- (id)faceTimeDNDMenuOptionsBlocking;
- (id)selectedFaceTimeDNDMenuOption;
- (id)selectedFaceTimeDNDMenuOptionBlocking;
- (unsigned long long)selectedFaceTimeDNDMenuOptionValue;
- (unsigned long long)selectedFaceTimeDNDMenuOptionValueBlocking;
- (void)setAllowTwoTimeCallthrough:(char)a0;
- (void)setFaceTimeDNDEnabled:(char)a0;
- (void)setSelectedFaceTimeDNDMenuOption:(unsigned long long)a0;
- (void)setValue:(id)a0 forControllerKey:(id)a1;

@end
