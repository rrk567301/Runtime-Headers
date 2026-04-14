@class NSMutableSet;

@interface PPSpotlightScoringFeatureVector : NSObject {
    NSMutableSet *_features;
}

+ (id)decodeFeatureVectorFromData:(id)a0 version:(id)a1;
+ (id)featureVectorVersion;

- (id)init;
- (void).cxx_destruct;
- (id)encodeAsData;
- (void)addQidString:(id)a0;
- (BOOL)containsQidString:(id)a0;
- (id)qidStrings;

@end
