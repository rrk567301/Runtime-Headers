@class NSMapTable;

@interface CBORMap : CBORValue {
    NSMapTable *m_data;
}

- (void)write:(id)a0;
- (int)fieldType;
- (void).cxx_destruct;
- (id)init;
- (id)getSortedKeys;
- (void)setKey:(id)a0 value:(id)a1;

@end
