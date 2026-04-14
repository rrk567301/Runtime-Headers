@class NSString, NSURL;

@interface GameMetadataHints : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSURL *executableURL;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayName:(id)a0 executableURL:(id)a1;

@end
