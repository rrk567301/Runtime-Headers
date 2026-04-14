@interface MADownloadConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL discretionary;

- (id)initWithPlist:(id)a0;
- (id)encodeAsPlist;
- (void)encodeWithCoder:(id)a0;
- (void)logConfig;
- (id)init;
- (id)summary;
- (id)initWithCoder:(id)a0;

@end
