@class PKArchive;

@interface PKProductUnarchiver : NSObject {
    PKArchive *_productArchive;
}

@property char useIndexBom;
@property char preserveExtAttrsAndACLs;

- (void)dealloc;
- (char)_unarchiveCPIOToPath:(id)a0 error:(id *)a1;
- (char)_unarchiveNonCPIOToPath:(id)a0 error:(id *)a1;
- (id)initWithProductURL:(id)a0;
- (char)unarchiveToPath:(id)a0 error:(id *)a1;

@end
