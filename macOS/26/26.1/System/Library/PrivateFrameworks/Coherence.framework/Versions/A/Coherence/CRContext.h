@interface CRContext : NSObject {
    void /* unknown type, empty encoding */ crdtDatabase;
    void /* unknown type, empty encoding */ assetManager;
    void /* unknown type, empty encoding */ encryptionDelegate;
}

+ (id)newTransientContextObjC;

- (void).cxx_destruct;
- (id)init;

@end
