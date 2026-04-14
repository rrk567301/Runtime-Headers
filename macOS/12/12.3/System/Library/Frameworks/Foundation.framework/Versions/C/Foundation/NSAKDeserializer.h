@interface NSAKDeserializer : NSObject {
    id ds;
}

- (void)dealloc;
- (id)deserializeNewData;
- (id)deserializeNewList;
- (id)deserializeNewPList;
- (id)deserializeNewString;
- (id)deserializeData:(id)a0;
- (id)deserializeString:(id)a0;
- (id)deserializeList:(id)a0;
- (id)deserializeListItemIn:(id)a0 at:(unsigned long long)a1 length:(unsigned long long)a2;
- (id)deserializeNewObject;
- (id)deserializePList:(id)a0;
- (id)deserializePListKeyIn:(id)a0;
- (id)deserializePListValueIn:(id)a0 key:(id)a1 length:(unsigned long long)a2;
- (id)deserializeNewKeyString;
- (id)initForDeserializerStream:(id)a0;
- (id)deserializerStream;

@end
