@interface VNModelFilesCache : NSObject {
    struct unique_ptr<cvml::util::model_file_cache, std::default_delete<cvml::util::model_file_cache>> { struct { struct model_file_cache *__ptr_; } ; } m_impl;
}

+ (id)sharedInstance;
+ (BOOL)useFOpenForModelWithPath:(id)a0;

- (id)load:(id)a0;
- (void)unload:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)purgeAll;

@end
