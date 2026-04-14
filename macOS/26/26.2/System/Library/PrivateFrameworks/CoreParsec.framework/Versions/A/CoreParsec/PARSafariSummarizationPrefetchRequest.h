@class NSString, NSArray;

@interface PARSafariSummarizationPrefetchRequest : PARRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *localeString;
@property (copy, nonatomic) NSArray *urlVariants;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)responseClass;
- (unsigned int)nwActivityLabel;

@end
