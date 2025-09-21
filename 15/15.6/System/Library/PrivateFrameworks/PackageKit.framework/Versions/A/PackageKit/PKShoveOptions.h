@class NSURL, NSSet;

@interface PKShoveOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSURL *sourcePath;
@property (retain) NSURL *destPath;
@property unsigned long long optionFlags;
@property (retain) NSSet *forcedReplacementPaths;
@property char stompReplacementPaths;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
