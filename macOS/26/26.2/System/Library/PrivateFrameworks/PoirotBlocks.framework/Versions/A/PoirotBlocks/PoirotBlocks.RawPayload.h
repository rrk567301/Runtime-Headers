@interface PoirotBlocks.RawPayload : BMEventBase <BMStoreData> {
    void /* unknown type, empty encoding */ data;
}

@property (nonatomic, readonly) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)serialize;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)init;

@end
