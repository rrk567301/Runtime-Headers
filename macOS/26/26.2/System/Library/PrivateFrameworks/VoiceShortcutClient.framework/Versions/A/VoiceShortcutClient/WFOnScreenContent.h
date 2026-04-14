@class NSURL, INFile;

@interface WFOnScreenContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) INFile *file;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 file:(id)a1;

@end
