@class NSURL;

@interface CKDSStorageFile : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) char isOwned;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 isOwned:(char)a1;

@end
