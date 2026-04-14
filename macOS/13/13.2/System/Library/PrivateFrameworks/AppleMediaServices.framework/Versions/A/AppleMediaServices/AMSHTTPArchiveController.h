@class NSNumber;

@interface AMSHTTPArchiveController : NSObject

@property (class, getter=isRemoveDisabled) BOOL removeDisabled;
@property (class, retain) NSNumber *maxBufferSizeOverride;

+ (void)initialize;
+ (BOOL)_disabled;
+ (id)harURLFilters;
+ (void)addHTTPArchive:(id)a0;
+ (id)_harURLFilters;
+ (BOOL)_shouldAddRequest:(id)a0;
+ (void)_updateHarFileFilters;

@end
