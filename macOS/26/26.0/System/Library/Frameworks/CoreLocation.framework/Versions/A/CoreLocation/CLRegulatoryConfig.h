@interface CLRegulatoryConfig : NSObject {
    struct unique_ptr<CLRegulatoryConfigInternal, std::default_delete<CLRegulatoryConfigInternal>> { struct CLRegulatoryConfigInternal *__ptr_; } _config;
}

- (BOOL)setExtendedBorderDetection:(BOOL)a0 withExtendedDistance:(int)a1;
- (BOOL)addConfigForRegionList:(id)a0 config:(id)a1 error:(id *)a2;
- (BOOL)addConfigForIsoList:(id)a0 config:(id)a1 error:(id *)a2;
- (id).cxx_construct;
- (void)fetchInfoForLocation:(id)a0 withReply:(id /* block */)a1;
- (void)fetchConfigForLocation:(id)a0 withReply:(id /* block */)a1;
- (id)initWithQueue:(id)a0 defaultConfig:(id)a1;
- (void).cxx_destruct;

@end
