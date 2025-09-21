@interface MADownloadConfig : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char discretionary;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlist:(id)a0;
- (id)summary;
- (id)encodeAsPlist;
- (void)logConfig;

@end
