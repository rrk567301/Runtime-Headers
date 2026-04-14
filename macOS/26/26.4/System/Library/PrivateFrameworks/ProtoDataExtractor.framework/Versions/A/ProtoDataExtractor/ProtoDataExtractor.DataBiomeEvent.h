@interface ProtoDataExtractor.DataBiomeEvent : NSObject <BMStoreData> {
    void /* unknown type, empty encoding */ data;
}

@property (nonatomic) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)serialize;
- (void).cxx_destruct;
- (id)init;

@end
