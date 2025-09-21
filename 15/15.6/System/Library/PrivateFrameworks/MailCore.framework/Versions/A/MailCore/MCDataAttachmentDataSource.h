@class NSData, NSString;

@interface MCDataAttachmentDataSource : NSObject <MCAttachmentDataSource>

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) char dataIsLocallyAvailable;
@property (readonly, nonatomic) char canResultsBeCached;
@property (readonly, nonatomic) char isDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (unsigned long long)approximateSizeForAccessLevel:(long long)a0;
- (void)dataForAccessLevel:(long long)a0 completionBlock:(id /* block */)a1;
- (void)fileWrapperForAccessLevel:(long long)a0 completionBlock:(id /* block */)a1;

@end
