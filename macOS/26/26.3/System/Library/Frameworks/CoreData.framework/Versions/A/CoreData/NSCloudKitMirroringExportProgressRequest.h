@class NSSet;

@interface NSCloudKitMirroringExportProgressRequest : NSCloudKitMirroringRequest

@property (copy, nonatomic) NSSet *objectIDsToFetch;

- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
