@class IDSLinksQualityMeasurerSyncToken;

@interface IDSLinksQualityMeasurerDelta : NSObject {
    void /* unknown type, empty encoding */ delta;
}

@property (nonatomic, readonly) IDSLinksQualityMeasurerSyncToken *syncToken;

+ (id)createWithJSON:(id)a0;

- (id)json;
- (void).cxx_destruct;

@end
