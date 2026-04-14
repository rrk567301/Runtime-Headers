@class NSURL;

@interface SBRemoteURLAppLocator : SBAppLocator {
    NSURL *_url;
}

- (id)name;
- (id)initWithURL:(id)a0;
- (id)path;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)sdef;

@end
