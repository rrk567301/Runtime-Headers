@protocol UVCPreferencesTestability;

@interface UVCPreferences : NSObject {
    void /* unknown type, empty encoding */ _impl;
    void /* unknown type, empty encoding */ _testabilityProxy;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ sink;
    void /* unknown type, empty encoding */ _automation;
    void /* unknown type, empty encoding */ _enabled;
    void /* unknown type, empty encoding */ _magicEdgesEnabled;
    void /* unknown type, empty encoding */ _supported;
}

@property (class, nonatomic, readonly) UVCPreferences *sharedPreferences;

@property (nonatomic, retain) id<UVCPreferencesTestability> testabilityProxy;
@property (nonatomic) char automation;
@property (nonatomic) char enabled;
@property (nonatomic) char magicEdgesEnabled;
@property (nonatomic, readonly) char isSupported;
@property (nonatomic, readonly) char isBeta;

+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)testabilityProxyDidChange;

@end
