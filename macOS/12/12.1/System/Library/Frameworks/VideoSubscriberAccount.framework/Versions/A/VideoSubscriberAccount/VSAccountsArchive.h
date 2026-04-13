@class NSArray, VSAccountChannels;

@interface VSAccountsArchive : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *accounts;
@property (copy, nonatomic) VSAccountChannels *channels;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
