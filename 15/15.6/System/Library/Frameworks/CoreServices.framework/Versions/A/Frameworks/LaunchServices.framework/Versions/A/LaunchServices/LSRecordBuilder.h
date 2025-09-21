@class _LSDatabase;

@interface LSRecordBuilder : NSObject {
    _LSDatabase *_db;
}

+ (id)recordBuilderForType:(unsigned long long)a0;

- (void).cxx_destruct;
- (char)parseInfoPlist:(id)a0;
- (char)parseInstallationInfo:(id)a0;
- (void)parseiTunesMetadata:(id)a0;
- (unsigned int)registerBundleRecord:(id)a0 error:(id *)a1;
- (void)setDatabase:(id)a0;

@end
