@interface CLRegulatoryConfig : NSObject {
    struct unique_ptr<CLRegulatoryConfigInternal, std::default_delete<CLRegulatoryConfigInternal>> { struct __compressed_pair<CLRegulatoryConfigInternal *, std::default_delete<CLRegulatoryConfigInternal>> { struct CLRegulatoryConfigInternal *__value_; } __ptr_; } _config;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)fetchInfoForLocation:(id)a0 withReply:(id /* block */)a1;
- (char)addConfigForIsoList:(id)a0 config:(id)a1 error:(id *)a2;
- (char)addConfigForRegionList:(id)a0 config:(id)a1 error:(id *)a2;
- (void)fetchConfigForLocation:(id)a0 withReply:(id /* block */)a1;
- (id)initWithQueue:(id)a0 defaultConfig:(id)a1;
- (char)setExtendedBorderDetection:(char)a0 withExtendedDistance:(int)a1;

@end
