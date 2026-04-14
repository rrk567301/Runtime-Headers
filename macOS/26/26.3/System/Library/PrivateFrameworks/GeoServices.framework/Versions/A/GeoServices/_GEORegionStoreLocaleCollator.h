@class NSString, NSLocale;

@interface _GEORegionStoreLocaleCollator : NSObject <_GEORegionStoreCollator> {
    NSLocale *_locale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (int)collate:(id)a0 :(id)a1;

@end
