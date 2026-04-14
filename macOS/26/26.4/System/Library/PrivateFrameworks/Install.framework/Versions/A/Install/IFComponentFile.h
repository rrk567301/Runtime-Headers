@interface IFComponentFile : IFComponent

+ (id)type;

- (BOOL)isEqualToComponent:(id)a0;
- (id)sha1;
- (id)_sha1StringForFile:(id)a0;
- (id)initWithPath:(id)a0 andSha1:(id)a1;

@end
