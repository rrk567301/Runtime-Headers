@class NSURL;

@interface SBRemoteURLAppLocator : SBAppLocator {
    NSURL *_url;
}

- (id)path;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)name;
- (id)sdef;

@end
