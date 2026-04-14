@interface OSPTDMDisk : NSObject

@property unsigned int tdm;

- (BOOL)boolForProperty:(id)a0;
- (id)stringForProperty:(id)a0;
- (id)numberForProperty:(id)a0;
- (void)dealloc;
- (id)initWithDiskAtMountPoint:(id)a0;

@end
