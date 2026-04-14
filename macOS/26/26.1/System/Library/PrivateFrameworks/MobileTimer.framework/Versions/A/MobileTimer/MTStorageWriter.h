@class NSCoder, NSMutableArray;

@interface MTStorageWriter : NSCoder <MTSerializer>

@property (retain, nonatomic) NSMutableArray *stack;
@property (readonly, nonatomic) unsigned long long mtType;
@property (readonly, nonatomic) NSCoder *mtCoder;

- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (id)encodedDictionary;
- (id)_dictionaryForProtocolObject:(id)a0;
- (void)_encodeProtocolObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)_serializingProtocol;
- (void)_encodeObject:(id)a0 forKey:(id)a1;
- (id)init;

@end
