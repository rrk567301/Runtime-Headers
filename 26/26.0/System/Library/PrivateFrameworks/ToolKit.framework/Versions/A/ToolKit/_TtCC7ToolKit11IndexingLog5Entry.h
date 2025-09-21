@interface _TtCC7ToolKit11IndexingLog5Entry : NSObject <BMStoreData> {
    void /* unknown type, empty encoding */ protoEntry;
}

@property (class, nonatomic, readonly) unsigned int latestDataVersion;

@property (nonatomic, readonly) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (id)serialize;
- (void).cxx_destruct;

@end
