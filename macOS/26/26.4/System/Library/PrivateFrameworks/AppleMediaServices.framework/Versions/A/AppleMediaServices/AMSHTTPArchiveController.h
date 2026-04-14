@class NSNumber;

@interface AMSHTTPArchiveController : NSObject

@property (class, getter=isRemoveDisabled) BOOL removeDisabled;
@property (class, retain) NSNumber *maxBufferSizeOverride;

+ (void)initialize;
+ (void)addHTTPArchive:(id)a0;
+ (id)_harURLFilters;
+ (BOOL)_disabled;
+ (id)harURLFilters;
+ (void)_updateHarFileFilters;
+ (BOOL)_shouldAddRequest:(id)a0;

@end
