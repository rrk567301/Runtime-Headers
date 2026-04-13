@class NSString;

@interface ABCNMultiValueReplaceUpdate : NSObject <ABCNMultiValueUpdate> {
    id _value;
    NSString *_label;
    NSString *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)applyToMutableMultiValue:(id)a0 withIdentifierMap:(id)a1;
- (void)applyToABMutableMultiValue:(id)a0 transform:(id /* block */)a1;
- (id)initWithValue:(id)a0 label:(id)a1 identifier:(id)a2;

@end
