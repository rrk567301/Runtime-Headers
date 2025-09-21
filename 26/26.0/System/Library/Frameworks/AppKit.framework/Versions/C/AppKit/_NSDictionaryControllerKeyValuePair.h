@class NSDictionaryController, NSString;

@interface _NSDictionaryControllerKeyValuePair : NSDictionaryControllerKeyValuePair {
    NSDictionaryController *_dictionaryController;
    NSString *_localizedKey;
    NSString *_key;
    id _value;
    struct __controllerKeyValuePairFlags { unsigned char _isExplicitlyIncluded : 1; unsigned int _reservedControllerKeyValuePair : 31; } _controllerKeyValuePairFlags;
}

@property NSDictionaryController *dictionaryController;

- (id)_init;
- (void)setValue:(id)a0;
- (BOOL)validateKey:(id *)a0 error:(id *)a1;
- (id)value;
- (void)dealloc;
- (id)localizedKey;
- (void)setKey:(id)a0;
- (id)key;
- (void)setLocalizedKey:(id)a0;
- (BOOL)validateValue:(id *)a0 error:(id *)a1;
- (void)_markAsExplicitlyIncluded:(BOOL)a0;
- (void)_setKeyWithoutLocalizedKey:(id)a0;
- (void)_setLocalizedKeyWithoutKey:(id)a0;
- (void)_setValueWithoutNotification:(id)a0;
- (void)_setWithoutNotificationLocalizedKey:(id)a0 key:(id)a1;
- (BOOL)_validateAnyKey:(id)a0 error:(id *)a1;
- (id)dictionaryController;
- (BOOL)isExplicitlyIncluded;
- (void)setDictionaryController:(id)a0;
- (BOOL)validateLocalizedKey:(id *)a0 error:(id *)a1;

@end
