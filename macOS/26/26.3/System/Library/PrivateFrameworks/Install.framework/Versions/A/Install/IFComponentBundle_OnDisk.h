@class NSString;

@interface IFComponentBundle_OnDisk : IFComponentBundle {
    NSString *_versionString;
}

- (id)versionString;
- (void)dealloc;
- (id)attributeForKey:(id)a0;
- (id)initWithFilesystemPath:(id)a0;
- (id)subComponentAtSubPath:(id)a0;

@end
