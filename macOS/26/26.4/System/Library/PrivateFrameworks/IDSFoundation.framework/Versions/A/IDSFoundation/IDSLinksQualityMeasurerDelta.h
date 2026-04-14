@class IDSLinksQualityMeasurerSyncToken;

@interface IDSLinksQualityMeasurerDelta : NSObject {
    void /* unknown type, empty encoding */ delta;
}

@property (nonatomic, readonly) IDSLinksQualityMeasurerSyncToken *syncToken;

+ (id)createWithJSON:(id)a0;

- (void).cxx_destruct;
- (id)json;

@end
