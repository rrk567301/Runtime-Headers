@class NSString;

@interface PARSafariSummarizationSummarizeRequest : PARRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *localeString;

- (Class)responseClass;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned int)nwActivityLabel;

@end
