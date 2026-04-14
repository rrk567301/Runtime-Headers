@class NSString, ADMDSNode;

@interface ADMDSRecord : NSObject {
    unsigned int mRecordReference;
    NSString *mRecordName;
    NSString *mRecordType;
    ADMDSNode *mNode;
}

+ (long long)nextFreeIDInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)name;
- (BOOL)open;
- (void)close;
- (id)node;
- (BOOL)isOpen;
- (BOOL)_setValue:(id)a0 forKey:(id)a1;
- (id)initWithRecord:(id)a0;
- (id)generatedUID;
- (id)initWithRecordName:(const char *)a0 type:(const char *)a1 node:(id)a2;
- (id)attributeForType:(id)a0 fullInfo:(BOOL)a1;
- (BOOL)addValue:(id)a0 toAttributeType:(id)a1;
- (BOOL)removeValue:(id)a0 fromAttributeType:(id)a1;
- (BOOL)removeAttribute:(id)a0;
- (BOOL)deleteRecord;
- (void)_cleanUpDeletedRecord;
- (BOOL)createRecordWithAttributes:(id)a0;
- (long long)setRecordNameTo:(id)a0;
- (BOOL)addAttribute:(id)a0 value:(id)a1;
- (BOOL)setValue:(id)a0 withValueID:(unsigned int)a1 forAttributeType:(id)a2;
- (BOOL)removeValueID:(unsigned int)a0 fromAttributeType:(id)a1;
- (id)attributesForTypes:(id)a0;
- (id)initWithRecordName:(const char *)a0 type:(const char *)a1;
- (BOOL)createRecord;
- (BOOL)createRecordInNode:(id)a0 withAttributes:(id)a1;

@end
