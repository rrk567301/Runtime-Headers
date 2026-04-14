@class NSNumber;

@interface AMSHTTPArchiveController : NSObject

@property (class, getter=isRemoveDisabled) BOOL removeDisabled;
@property (class, retain) NSNumber *maxBufferSizeOverride;

+ (BOOL)_disabled;
+ (void)initialize;
+ (BOOL)_shouldAddRequest:(id)a0;
+ (void)addHTTPArchive:(id)a0;
+ (id)_harURLFilters;
+ (void)_updateHarFileFilters;
+ (id)harURLFilters;

@end
