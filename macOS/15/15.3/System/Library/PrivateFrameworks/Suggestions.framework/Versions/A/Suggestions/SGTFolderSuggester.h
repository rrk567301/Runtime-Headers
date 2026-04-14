@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface SGTFolderSuggester : SGTSuggester {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy) NSURL *rootPath;

- (void)dealloc;
- (void)cleanup;
- (void).cxx_destruct;
- (void)setInput:(id)a0;
- (id)initWithRootPath:(id)a0;

@end
