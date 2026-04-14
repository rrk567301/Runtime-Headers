@interface NSAKDeserializer : NSObject {
    id ds;
}

- (void)dealloc;
- (id)initForDeserializerStream:(id)a0;
- (id)deserializerStream;
- (id)deserializeNewObject;
- (id)deserializeNewData;
- (id)deserializeData:(id)a0;
- (id)deserializeNewString;
- (id)deserializeNewKeyString;
- (id)deserializeString:(id)a0;
- (id)deserializeNewList;
- (id)deserializeList:(id)a0;
- (id)deserializeListItemIn:(id)a0 at:(unsigned long long)a1 length:(unsigned long long)a2;
- (id)deserializeNewPList;
- (id)deserializePList:(id)a0;
- (id)deserializePListKeyIn:(id)a0;
- (id)deserializePListValueIn:(id)a0 key:(id)a1 length:(unsigned long long)a2;

@end
