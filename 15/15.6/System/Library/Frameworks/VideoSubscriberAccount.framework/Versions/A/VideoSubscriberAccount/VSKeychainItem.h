@class NSMutableDictionary, VSKeychainItemKind, VSKeychainEditingContext, NSData;

@interface VSKeychainItem : NSObject

@property (retain, nonatomic) NSMutableDictionary *committedValues;
@property (weak, nonatomic) VSKeychainEditingContext *editingContext;
@property (nonatomic, getter=isInserted) char inserted;
@property (nonatomic, getter=isUpdated) char updated;
@property (nonatomic, getter=isDeleted) char deleted;
@property (retain, nonatomic) NSMutableDictionary *primitiveValues;
@property (nonatomic) char hasFaultForData;
@property (readonly, copy, nonatomic) VSKeychainItemKind *itemKind;
@property (readonly, nonatomic) char hasChanges;
@property (readonly, nonatomic) char hasPersistentChangedValues;
@property (copy, nonatomic) NSData *data;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)willChangeValueForKey:(id)a0;
- (id)changedValues;
- (id)committedValuesForKeys:(id)a0;
- (void)didAccessValueForKey:(id)a0;
- (id)primitiveValueForKey:(id)a0;
- (void)setPrimitiveValue:(id)a0 forKey:(id)a1;
- (void)willAccessValueForKey:(id)a0;
- (id)committedValueForKey:(id)a0;
- (void)_setCommittedValues:(id)a0 registeringUndo:(char)a1;
- (id)initWithItemKind:(id)a0 insertIntoEditingContext:(id)a1;

@end
