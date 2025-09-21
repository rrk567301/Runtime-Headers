@class NSMutableDictionary, NSDictionary, NSMapTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface QLExtensionManagerCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessMatchingExtensionsQueue;
    NSObject<OS_dispatch_queue> *_waitForExtensionListQueue;
    NSObject<OS_dispatch_queue> *_queryCacheQueue;
}

@property (retain, nonatomic) NSDictionary *matchingAttributes;
@property (retain, nonatomic) id matchingContext;
@property (retain, nonatomic) NSMutableDictionary *matchingExtensions;
@property (retain, nonatomic) NSMapTable *qlExtensions;
@property (retain, nonatomic) NSMutableDictionary *queryCache;
@property (nonatomic) char isMatchingExtensions;
@property (retain) NSObject<OS_dispatch_semaphore> *waitForExtensionsSemaphore;

+ (id)bestMatchingExtensionsFromSupportingExtensions:(id)a0 includingExtensionsWithSupportingParentTypes:(char)a1 byContentType:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)beginMatchingExtensions;
- (void)endMatchingExtensions;
- (void)_didReceiveNewMatchingExtensionList:(id)a0;
- (char)_supportedContentTypesFromExtension:(id)a0 matches:(id)a1 allowMatchingWithParentTypes:(char)a2;
- (void)_synchronouslyWaitForExtensionListIfNeeded;
- (id)extensionWithMatchingAttributes:(id)a0 allowExtensionsForParentTypes:(char)a1 extensionPath:(id)a2;
- (id)extensionWithMatchingAttributes:(id)a0 allowExtensionsForParentTypes:(char)a1 extensionPath:(id)a2 firstPartyExtension:(char)a3;
- (char)hasExtensionWithMatchingAttributes:(id)a0;
- (id)initWithMatchingAttributes:(id)a0;

@end
