@class NSURL;

@interface SBRemoteURLAppLocator : SBAppLocator {
    NSURL *_url;
}

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)description;
- (id)name;
- (id)path;
- (id)sdef;

@end
