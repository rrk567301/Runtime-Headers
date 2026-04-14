@interface MADownloadConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL discretionary;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsPlist;
- (id)init;
- (void)logConfig;
- (id)initWithCoder:(id)a0;
- (id)initWithPlist:(id)a0;

@end
