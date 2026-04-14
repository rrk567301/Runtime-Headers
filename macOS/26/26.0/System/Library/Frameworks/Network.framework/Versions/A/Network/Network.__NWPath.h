@class NSString;

@interface Network.__NWPath : NSObject {
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ nexusKeyStorage;
    void /* unknown type, empty encoding */ reasonDescriptionStorage;
    void /* unknown type, empty encoding */ nat64PrefixStorage;
}

@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
