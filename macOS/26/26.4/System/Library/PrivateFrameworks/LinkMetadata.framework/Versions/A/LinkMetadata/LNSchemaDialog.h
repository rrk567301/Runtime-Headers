@class NSString, NSArray, NSURL;

@interface LNSchemaDialog : LNSchemaDialogStatement <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *formatString;
@property (readonly, nonatomic) NSString *supportingFormatString;
@property (readonly, copy, nonatomic) NSArray *parameterIdentifiers;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSString *table;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)deferredFormatString;
- (id)deferredSupportingFormatString;
- (id)schemaDialogStatementByEvaluatingAction:(id)a0;
- (id)initWithFormatString:(id)a0 parameterIdentifiers:(id)a1 bundleURL:(id)a2 table:(id)a3;
- (id)initWithFormatString:(id)a0 parameterIdentifiers:(id)a1 supportingFormatString:(id)a2 bundleURL:(id)a3 table:(id)a4;
- (id)localizedFormatStringForLocaleIdentifier:(id)a0;
- (id)localizedSupportingFormatStringForLocaleIdentifier:(id)a0;

@end
