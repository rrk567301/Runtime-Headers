@class NSURL;

@interface _VZSEPStorage : NSObject <NSCopying>

@property (readonly, copy) NSURL *URL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initCreatingStorageAtURL:(id)a0 error:(id *)a1;

@end
