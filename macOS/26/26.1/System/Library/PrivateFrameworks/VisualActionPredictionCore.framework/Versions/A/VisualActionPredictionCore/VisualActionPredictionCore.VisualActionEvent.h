@interface VisualActionPredictionCore.VisualActionEvent : NSObject <BMStoreData> {
    void /* unknown type, empty encoding */ actionId;
    void /* unknown type, empty encoding */ outcome;
    void /* unknown type, empty encoding */ bundleId;
    void /* unknown type, empty encoding */ majorLabel;
    void /* unknown type, empty encoding */ minorLabel;
    void /* unknown type, empty encoding */ timestamp;
}

@property (nonatomic) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (void).cxx_destruct;
- (id)serialize;
- (id)init;

@end
