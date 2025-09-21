@class NSURL;

@interface SBRemoteURLAppLocator : SBAppLocator {
    NSURL *_url;
}

- (void)encodeWithCoder:(id)a0;
- (id)path;
- (id)description;
- (id)initWithURL:(id)a0;
- (id)name;
- (id)initWithCoder:(id)a0;
- (id)sdef;

@end
