@class NSString;

@interface Network.ParametersStorage : NSObject {
    void /* unknown type, empty encoding */ internalStorage;
    void /* unknown type, empty encoding */ storageLock;
    void /* unknown type, empty encoding */ accountIDStorage;
    void /* unknown type, empty encoding */ bundleIDStorage;
    void /* unknown type, empty encoding */ attributedBundleStorage;
    void /* unknown type, empty encoding */ attributionContextStorage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *redactedDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
