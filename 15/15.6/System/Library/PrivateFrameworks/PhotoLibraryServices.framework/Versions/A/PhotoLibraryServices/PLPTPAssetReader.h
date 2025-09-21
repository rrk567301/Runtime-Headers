@class NSString;

@interface PLPTPAssetReader : NSObject {
    char _shouldDeleteTemporaryFileOnDeallocation;
}

@property (readonly, copy, nonatomic) NSString *path;
@property (retain, nonatomic) id userInfo;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (id)dataSourcePathForDataRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)initWithTemporaryFileDeletedOnDeallocPath:(id)a0;

@end
