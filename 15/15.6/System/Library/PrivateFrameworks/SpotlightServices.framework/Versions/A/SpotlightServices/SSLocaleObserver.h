@class NSArray, NSObject, NSLocale;
@protocol OS_dispatch_queue;

@interface SSLocaleObserver : NSObject {
    NSLocale *_currentLocale;
    NSArray *_preferredLanguages;
    char _isCJK;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)currentLocaleWithPreferredLanguagesBlock:(id /* block */)a0;

@end
