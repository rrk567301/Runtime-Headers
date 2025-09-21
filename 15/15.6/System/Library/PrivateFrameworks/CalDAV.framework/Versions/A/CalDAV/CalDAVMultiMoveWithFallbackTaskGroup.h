@class NSDictionary, NSMutableDictionary;

@interface CalDAVMultiMoveWithFallbackTaskGroup : CoreDAVMultiMoveWithFallbackTaskGroup

@property (retain, nonatomic) NSDictionary *sourceEntityScheduleTags;
@property (nonatomic) char isAutoScheduleSupported;
@property (retain, nonatomic) NSMutableDictionary *destinationEntityScheduleTags;

- (void).cxx_destruct;
- (void)_completedPropFindTask:(id)a0 intermediateETag:(id)a1 intermediateScheduleTag:(id)a2 destinationFilename:(id)a3;
- (void)_setTagsForDestinationEntityAtURL:(id)a0 fromTaskResponseHeaders:(id)a1 completionBlock:(id /* block */)a2;
- (id)initWithSourceURLs:(id)a0 destinationURL:(id)a1 overwrite:(char)a2 useFallback:(char)a3 sourceEntityDataPayloads:(id)a4 sourceEntityDataContentTypes:(id)a5 sourceEntityETags:(id)a6 sourceEntityScheduleTags:(id)a7 accountInfoProvider:(id)a8 taskManager:(id)a9 isAutoScheduleSupported:(char)a10;

@end
