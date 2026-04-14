@class NSNumber;

@interface AMSHTTPArchiveController : NSObject

@property (class, getter=isRemoveDisabled) BOOL removeDisabled;
@property (class, retain) NSNumber *maxBufferSizeOverride;

+ (void)initialize;
+ (void)_updateHarFileFilters;
+ (id)harURLFilters;
+ (id)_harURLFilters;
+ (void)addHTTPArchive:(id)a0;
+ (BOOL)_shouldAddRequest:(id)a0;
+ (BOOL)_disabled;

@end
