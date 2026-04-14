@class NSURL;

@interface CARPFCache : CARPFObject

@property (class, readonly) CARPFCache *defaultCache;

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=isExists) BOOL exists;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
