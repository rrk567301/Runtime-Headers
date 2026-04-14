@class NSMapTable;

@interface CBORMap : CBORValue {
    NSMapTable *m_data;
}

- (id)init;
- (void).cxx_destruct;
- (int)fieldType;
- (void)write:(id)a0;
- (void)setKey:(id)a0 value:(id)a1;
- (id)getSortedKeys;

@end
