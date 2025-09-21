@class NSString, LNActionSummaryString, NSArray;

@interface LNAppShortcutParameterPresentationMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *genericTitle;
@property (readonly, copy, nonatomic) NSString *parameterIdentifier;
@property (readonly, copy, nonatomic) LNActionSummaryString *specificTitle;
@property (readonly, copy, nonatomic) NSString *localizationTable;
@property (readonly, copy, nonatomic) NSArray *optionsCollection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParameterIdentifier:(id)a0 specificTitle:(id)a1 genericTitle:(id)a2 localizationTable:(id)a3 optionsCollection:(id)a4;
- (id)initWithParameterIdentifier:(id)a0 specificTitle:(id)a1 localizationTable:(id)a2 optionsCollection:(id)a3;

@end
