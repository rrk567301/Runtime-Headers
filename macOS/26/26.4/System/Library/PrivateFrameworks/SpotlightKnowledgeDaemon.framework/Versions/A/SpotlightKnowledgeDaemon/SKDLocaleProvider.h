@class NSString, NSArray, NSLocale;

@interface SKDLocaleProvider : NSObject <SKDLocaleProviding> {
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, readonly) NSLocale *currentLocale;
@property (nonatomic, readonly) NSString *currentRegion;
@property (nonatomic, readonly) NSArray *currentPreferredLanguages;

- (void).cxx_destruct;
- (id)init;
- (void)updateLocale;

@end
