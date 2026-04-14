@class NSArray;

@interface CRDetectionResult : NSObject {
    void /* function */ lines;
    void /* unknown type, empty encoding */ tableRegionsMutex;
    void /* function */ pyramidPreIntraScaleNMSTextFeatures;
    void /* function */ pyramidScaleSize;
    void /* function */ pyramidScaleName;
}

@property (nonatomic, readonly) NSArray *lines;
@property (nonatomic, copy) NSArray *tableRegions;
@property (nonatomic, copy) NSArray *pyramidPreIntraScaleNMSTextFeatures;
@property (nonatomic, copy) NSArray *pyramidScaleSize;
@property (nonatomic, copy) NSArray *pyramidScaleName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLines:(id)a0;

@end
