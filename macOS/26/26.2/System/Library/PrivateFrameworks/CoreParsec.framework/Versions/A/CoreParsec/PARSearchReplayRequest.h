@class NSString, NSDictionary;

@interface PARSearchReplayRequest : PARSearchRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *replaySearchURL;
@property (copy, nonatomic) NSDictionary *replayHeaderItems;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
