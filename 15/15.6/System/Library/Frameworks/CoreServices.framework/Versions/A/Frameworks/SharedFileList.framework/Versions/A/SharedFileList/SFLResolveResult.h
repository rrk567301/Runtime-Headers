@class NSURL, NSError;

@interface SFLResolveResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSURL *url;
@property (retain) NSError *error;
@property char stale;

+ (id)resultByResolvingBookmarkData:(id)a0 options:(unsigned long long)a1 relativeToURL:(id)a2;
+ (id)resultWithURL:(id)a0 stale:(char)a1 error:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
