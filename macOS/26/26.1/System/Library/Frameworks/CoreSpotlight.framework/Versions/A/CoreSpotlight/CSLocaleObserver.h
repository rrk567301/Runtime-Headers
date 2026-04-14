@class NSArray, NSObject, NSLocale;
@protocol OS_dispatch_queue;

@interface CSLocaleObserver : NSObject {
    NSLocale *_currentLocale;
    NSArray *_preferredLanguages;
    BOOL _isCJK;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)update;
- (id)init;
- (void)currentLocaleWithPreferredLanguagesBlock:(id /* block */)a0;

@end
