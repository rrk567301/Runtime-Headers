@class NSURL, NSSet;

@interface FCPersistentDictionary : NSObject

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSSet *allowedClasses;

- (id)initWithFileURL:(id)a0 allowedClasses:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)writeWithAccessor:(id /* block */)a0;
- (id)read;

@end
