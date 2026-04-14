@class NSDictionary;

@interface ATXInformationFeatureSet : NSObject <NSCopying> {
    NSDictionary *_features;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)initWithFeatureDictionary:(id)a0;
- (double)valueForFeature:(unsigned long long)a0;
- (void).cxx_destruct;

@end
