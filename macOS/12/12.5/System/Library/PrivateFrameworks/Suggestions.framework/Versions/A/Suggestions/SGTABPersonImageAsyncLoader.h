@class NSArray, NSString, NSHashTable, ABPerson;
@protocol SGTABPersonImageAsyncLoaderDelegate;

@interface SGTABPersonImageAsyncLoader : NSObject <ABImageClient> {
    long long asyncLoadTag;
    NSHashTable *relatedObjects;
}

@property (readonly) NSArray *relatedObjects;
@property (weak) id<SGTABPersonImageAsyncLoaderDelegate> delegate;
@property (readonly) ABPerson *person;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startLoading;
- (void)consumeImageData:(id)a0 forTag:(long long)a1;
- (id)initWithPerson:(id)a0;
- (void)cancelLoading;
- (void)removeAllRelatedObjects;
- (void)removeRelatedObject:(id)a0;
- (void)addRelatedObject:(id)a0;

@end
