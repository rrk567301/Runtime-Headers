@class CNContainer;

@interface CNCDPolicy : CNPolicy

@property (readonly, nonatomic) CNContainer *container;

+ (id)new;
+ (id)labelsByPropertyKey;

- (id)init;
- (void).cxx_destruct;
- (char)isReadonly;
- (id)initWithContainer:(id)a0;
- (char)isContactPropertySupported:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0 label:(id)a1;
- (char)shouldAddContact:(id)a0;
- (char)shouldRemoveContact:(id)a0;
- (id)supportedLabelsForContactProperty:(id)a0;
- (id)unsupportedAttributesForLabeledContactProperty:(id)a0;

@end
