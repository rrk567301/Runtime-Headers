@class NSURL, NSString, NSMutableSet;

@interface MCFileURLAttachmentDataSource : NSObject <MCAttachmentDataSource> {
    NSMutableSet *_operations;
}

@property (retain, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) BOOL dataIsLocallyAvailable;
@property (readonly, nonatomic) BOOL canResultsBeCached;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFileURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)approximateSizeForAccessLevel:(long long)a0;
- (void)dataForAccessLevel:(long long)a0 completionBlock:(id /* block */)a1;
- (void)fileWrapperForAccessLevel:(long long)a0 completionBlock:(id /* block */)a1;
- (id)_backgroundFileReadingQueue;

@end
