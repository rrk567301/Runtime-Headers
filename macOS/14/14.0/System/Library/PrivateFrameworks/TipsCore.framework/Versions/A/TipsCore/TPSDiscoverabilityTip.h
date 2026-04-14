@class NSDictionary, NSAttributedString;

@interface TPSDiscoverabilityTip : TPSTip

@property (nonatomic, getter=isLocalContent) BOOL localContent;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSDictionary *preconditions;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
