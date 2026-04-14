@class NSSet, NSObject;
@protocol CSEventListenerDelegate;

@interface CSEventListener : NSObject {
    NSObject<CSEventListenerDelegate> *_delegate;
    unsigned long long _eventFlags;
    NSSet *_includedBundleHashes;
    NSSet *_excludedBundleHashes;
    NSSet *_includeContentTypes;
    NSSet *_excludeContentTypes;
}

- (void).cxx_destruct;
- (id)initWithEventListenerDelegate:(id)a0;

@end
