@class NSNumber;

@interface AMSHTTPArchiveController : NSObject

@property (class, getter=isRemoveDisabled) char removeDisabled;
@property (class, retain) NSNumber *maxBufferSizeOverride;

+ (void)initialize;
+ (char)_disabled;
+ (void)addHTTPArchive:(id)a0;
+ (id)_harURLFilters;
+ (char)_shouldAddRequest:(id)a0;
+ (void)_updateHarFileFilters;
+ (id)harURLFilters;

@end
