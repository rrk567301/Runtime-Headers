@class NSArray, NSUUID, ICCRDocument, ICCRDictionary;

@interface ICMergeableDictionary : NSObject

@property (readonly, nonatomic) ICCRDocument *document;
@property (readonly, nonatomic) ICCRDictionary *dictionary;
@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSUUID *replicaID;

- (id)encodedData;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)mergeWithDictionary:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithData:(id)a0 replicaID:(id)a1;

@end
