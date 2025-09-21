@class NSURL, NSSet;

@interface PKShoveOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURL *sourcePath;
@property (retain) NSURL *destPath;
@property unsigned long long optionFlags;
@property (retain) NSSet *forcedReplacementPaths;
@property BOOL stompReplacementPaths;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
