@class NSMutableSet;

@interface PPSpotlightScoringFeatureVector : NSObject {
    NSMutableSet *_features;
}

+ (id)featureVectorVersion;
+ (id)decodeFeatureVectorFromData:(id)a0 version:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addQidString:(id)a0;
- (id)encodeAsData;
- (id)qidStrings;
- (BOOL)containsQidString:(id)a0;

@end
