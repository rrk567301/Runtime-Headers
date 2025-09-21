@class NSMutableSet;

@interface PPSpotlightScoringFeatureVector : NSObject {
    NSMutableSet *_features;
}

+ (id)decodeFeatureVectorFromData:(id)a0 version:(id)a1;
+ (id)featureVectorVersion;

- (id)init;
- (void).cxx_destruct;
- (void)addQidString:(id)a0;
- (char)containsQidString:(id)a0;
- (id)encodeAsData;
- (id)qidStrings;

@end
