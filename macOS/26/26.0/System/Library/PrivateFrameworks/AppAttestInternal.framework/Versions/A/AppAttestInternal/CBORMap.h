@class NSMapTable;

@interface CBORMap : CBORValue {
    NSMapTable *m_data;
}

- (int)fieldType;
- (id)init;
- (void)write:(id)a0;
- (void).cxx_destruct;
- (id)getSortedKeys;
- (void)setKey:(id)a0 value:(id)a1;

@end
