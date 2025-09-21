@class NSNumber, NSArray;

@interface VGDenylistEntry : NSObject {
    NSNumber *_modelId;
    NSArray *_firmwareIds;
    NSArray *_years;
    NSArray *_models;
}

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithModelId:(id)a0 firmwareIds:(id)a1 years:(id)a2 models:(id)a3;
- (char)isSupersetOfEntry:(id)a0;

@end
