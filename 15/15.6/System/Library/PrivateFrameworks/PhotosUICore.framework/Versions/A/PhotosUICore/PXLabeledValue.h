@class NSString;
@protocol PXLabeledValueType;

@interface PXLabeledValue : NSObject <NSCopying>

@property (class, readonly) PXLabeledValue *separatorLabeledValue;

@property (readonly, nonatomic) id<PXLabeledValueType> value;
@property (readonly, nonatomic) NSString *localizedLabel;
@property (readonly, nonatomic) NSString *localizedBadgeLabel;
@property (readonly, nonatomic, getter=isSeparator) char separator;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToLabeledValue:(id)a0;
- (id)_initSeparator;
- (id)initWithValue:(id)a0 localizedLabel:(id)a1;
- (id)labeledValueWithLocalizedBadgeLabel:(id)a0;

@end
