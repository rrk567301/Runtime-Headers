@class NSString, NSArray, NSLocale, NSCharacterSet;

@interface _GEORegionStorePrefixCollator : NSObject <_GEORegionStoreCollator> {
    NSLocale *_locale;
    NSCharacterSet *_separators;
    NSString *_base;
    NSArray *_baseComponents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)collate:(id)a0 :(id)a1;
- (id)initWithBaseString:(id)a0 locale:(id)a1;

@end
