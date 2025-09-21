@class NSString, NSArray, LNActionSummaryString, NSURL;

@interface LNActionSummary : LNActionConfiguration <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) LNActionSummaryString *summaryString;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSString *table;
@property (readonly, nonatomic) NSArray *otherParameterIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)actionConfigurationByEvaluatingAction:(id)a0;
- (id)actionConfigurationByEvaluatingAction:(id)a0 context:(id)a1;
- (id)initWithSummaryString:(id)a0 bundleURL:(id)a1 table:(id)a2 otherParameterIdentifiers:(id)a3;
- (id)localizedFormatStringForLocaleIdentifier:(id)a0;

@end
