@class NSString, ADMDSNode;

@interface ADMDSRecord : NSObject {
    unsigned int mRecordReference;
    NSString *mRecordName;
    NSString *mRecordType;
    ADMDSNode *mNode;
}

+ (long long)nextFreeIDInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)name;
- (void)close;
- (char)open;
- (char)addAttribute:(id)a0 value:(id)a1;
- (char)isOpen;
- (id)node;
- (char)_setValue:(id)a0 forKey:(id)a1;
- (id)initWithRecord:(id)a0;
- (id)generatedUID;
- (void)_cleanUpDeletedRecord;
- (char)addValue:(id)a0 toAttributeType:(id)a1;
- (id)attributeForType:(id)a0 fullInfo:(char)a1;
- (id)attributesForTypes:(id)a0;
- (char)createRecord;
- (char)createRecordInNode:(id)a0 withAttributes:(id)a1;
- (char)createRecordWithAttributes:(id)a0;
- (char)deleteRecord;
- (id)initWithRecordName:(const char *)a0 type:(const char *)a1;
- (id)initWithRecordName:(const char *)a0 type:(const char *)a1 node:(id)a2;
- (char)removeAttribute:(id)a0;
- (char)removeValue:(id)a0 fromAttributeType:(id)a1;
- (char)removeValueID:(unsigned int)a0 fromAttributeType:(id)a1;
- (long long)setRecordNameTo:(id)a0;
- (char)setValue:(id)a0 withValueID:(unsigned int)a1 forAttributeType:(id)a2;

@end
