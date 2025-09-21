@class NSError;

@interface FACacheImageMarqueeOperation : NSObject {
    void /* unknown type, empty encoding */ familyCircle;
    void /* unknown type, empty encoding */ imageExtension;
    void /* unknown type, empty encoding */ pictureStore;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ fileManager;
    void /* unknown type, empty encoding */ rootURL;
    void /* unknown type, empty encoding */ deviceScale;
}

- (id)init;
- (id)initWithFamilyCircle:(id)a0;
- (void).cxx_destruct;
- (void)createAndCacheData;
- (void)createAndCacheDataWithCompletionHandler:(void (^)(NSError *))a0;
- (void)generateMarqueeWith:(unsigned long long)a0;

@end
