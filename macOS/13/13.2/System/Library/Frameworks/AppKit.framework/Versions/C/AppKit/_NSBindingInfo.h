@class NSString, NSValueTransformer;

@interface _NSBindingInfo : NSObject <NSCoding> {
    NSString *_binding;
    NSString *_key;
    NSString *_partialControllerKey;
    NSString *_partialObjectKey;
    NSValueTransformer *_valueTransformer;
    NSString *_valueTransformerName;
    id _retainedController;
    id _unretainedController;
    struct __bindingFlags { unsigned char _requiresDirectKeyValueCodingCall : 1; unsigned char _raisesForNotApplicableKeys : 1; unsigned char _validatesImmediately : 1; unsigned char _alwaysPresentsApplicationModalAlerts : 1; unsigned char _archiveNullPlaceholder : 1; unsigned char _archiveNoSelectionPlaceholder : 1; unsigned char _archiveMultipleValuesSelectionPlaceholder : 1; unsigned char _archiveNotApplicablePlaceholder : 1; unsigned char _binderSpecificFlags : 8; unsigned char _retainController : 1; unsigned char _isWeakBinding : 1; unsigned short _reservedBinding : 14; } _bindingFlags;
    id _nullPlaceholder;
    id _noSelectionPlaceholder;
    id _multipleValuesSelectionPlaceholder;
    id _notApplicablePlaceholder;
    id _observingBinder;
}

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)binding;
- (id)key;
- (id)initWithController:(id)a0 retainController:(BOOL)a1 key:(id)a2 valueTransformer:(id)a3 binding:(id)a4;
- (id)initWithController:(id)a0 retainController:(BOOL)a1 key:(id)a2 valueTransformerName:(id)a3 binding:(id)a4;
- (void)setValueTransformer:(id)a0;
- (id)valueTransformer;
- (void)setController:(id)a0 retainController:(BOOL)a1;
- (id)controller;
- (void)setValueTransformerName:(id)a0;
- (id)valueTransformerName;
- (void)setRaisesForNotApplicableKeys:(BOOL)a0;
- (BOOL)raisesForNotApplicableKeys;
- (void)setValidatesImmediately:(BOOL)a0;
- (BOOL)validatesImmediately;
- (void)setAlwaysPresentsApplicationModalAlerts:(BOOL)a0;
- (BOOL)alwaysPresentsApplicationModalAlerts;
- (void)setWeakBinding:(BOOL)a0;
- (BOOL)isWeakBinding;
- (void)setBinderSpecificFlag:(BOOL)a0 atIndex:(unsigned long long)a1;
- (BOOL)binderSpecificFlagAtIndex:(unsigned long long)a0;
- (void)setPlaceholder:(id)a0 forMarker:(id)a1 isDefault:(BOOL)a2;
- (id)placeholderForMarker:(id)a0;
- (BOOL)isPlaceholderForMarkerExplicitlySet:(id)a0;
- (BOOL)setParameter:(id)a0 forOption:(id)a1;
- (void)setRequiresDirectKeyValueCodingCall:(BOOL)a0 partialControllerKey:(id)a1 partialObjectKey:(id)a2;
- (BOOL)requiresDirectKeyValueCodingCall;
- (id)partialControllerKey;
- (id)partialObjectKey;
- (void)setObservingBinder:(id)a0;
- (id)observingBinder;

@end
