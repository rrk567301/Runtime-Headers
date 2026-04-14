@class NSString;

@interface PARSafariSummarizationSummarizeRequest : PARRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *localeString;

- (Class)responseClass;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)nwActivityLabel;

@end
