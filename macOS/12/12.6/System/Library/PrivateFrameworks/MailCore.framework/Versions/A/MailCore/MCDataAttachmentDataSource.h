@class NSData, NSString;

@interface MCDataAttachmentDataSource : NSObject <MCAttachmentDataSource>

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL dataIsLocallyAvailable;
@property (readonly, nonatomic) BOOL canResultsBeCached;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (void)dataForAccessLevel:(long long)a0 completionBlock:(id /* block */)a1;
- (void)fileWrapperForAccessLevel:(long long)a0 completionBlock:(id /* block */)a1;
- (unsigned long long)approximateSizeForAccessLevel:(long long)a0;

@end
