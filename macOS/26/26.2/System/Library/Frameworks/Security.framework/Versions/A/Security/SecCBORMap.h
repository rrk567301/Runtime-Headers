@class NSMapTable;

@interface SecCBORMap : SecCBORValue {
    NSMapTable *m_data;
}

- (void)write:(id)a0;
- (void).cxx_destruct;
- (int)fieldType;
- (id)init;
- (id)dictionaryRepresentation;
- (id)getSortedKeys;
- (void)setKey:(id)a0 value:(id)a1;

@end
