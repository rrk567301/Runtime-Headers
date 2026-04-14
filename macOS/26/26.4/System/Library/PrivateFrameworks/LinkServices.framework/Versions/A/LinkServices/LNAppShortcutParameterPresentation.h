@class NSString, NSArray;

@interface LNAppShortcutParameterPresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedGenericTitle;
@property (readonly, copy, nonatomic) NSString *parameterIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedSpecificTitle;
@property (readonly, copy, nonatomic) NSArray *optionsCollections;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithParameterIdentifier:(id)a0 localizedSpecificTitle:(id)a1 optionsCollections:(id)a2;
- (id)initWithParameterIdentifier:(id)a0 localizedSpecificTitle:(id)a1 localizedGenericTitle:(id)a2 optionsCollections:(id)a3;

@end
