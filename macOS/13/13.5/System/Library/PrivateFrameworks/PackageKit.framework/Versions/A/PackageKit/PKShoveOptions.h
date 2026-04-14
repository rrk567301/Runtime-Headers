@class NSURL;

@interface PKShoveOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURL *sourcePath;
@property (retain) NSURL *destPath;
@property unsigned long long optionFlags;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
