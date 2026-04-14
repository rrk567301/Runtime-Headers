@class NSMapTable;

@interface SecCBORMap : SecCBORValue {
    NSMapTable *m_data;
}

- (void)write:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (int)fieldType;
- (id)init;
- (id)getSortedKeys;
- (void)setKey:(id)a0 value:(id)a1;

@end
