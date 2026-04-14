@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface SGTFolderSuggester : SGTSuggester {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy) NSURL *rootPath;

- (void)cleanup;
- (void)setInput:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithRootPath:(id)a0;

@end
