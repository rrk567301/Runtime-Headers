@class NSDictionary;

@interface ATXInformationFeatureSet : NSObject <NSCopying> {
    NSDictionary *_features;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFeatureDictionary:(id)a0;
- (double)valueForFeature:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
