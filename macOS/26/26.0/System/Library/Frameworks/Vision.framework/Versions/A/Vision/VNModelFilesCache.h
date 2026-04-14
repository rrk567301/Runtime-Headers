@interface VNModelFilesCache : NSObject {
    struct unique_ptr<cvml::util::model_file_cache, std::default_delete<cvml::util::model_file_cache>> { struct model_file_cache *__ptr_; } m_impl;
}

+ (id)sharedInstance;
+ (BOOL)useFOpenForModelWithPath:(id)a0;

- (id)load:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void)unload:(id)a0;
- (void)purgeAll;
- (void).cxx_destruct;

@end
