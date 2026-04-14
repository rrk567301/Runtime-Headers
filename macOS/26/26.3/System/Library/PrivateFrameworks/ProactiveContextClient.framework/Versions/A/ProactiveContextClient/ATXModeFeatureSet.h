@class NSMutableDictionary;

@interface ATXModeFeatureSet : NSObject <NSSecureCoding> {
    NSMutableDictionary *_features;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_enumerateFeaturesUsingBlock:(id /* block */)a0;
- (void)setString:(id)a0 forFeatureType:(int)a1;
- (void)setValue:(BOOL)a0 forBinaryFeatureOfType:(int)a1;
- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)boolValueForFeatureType:(int)a0;
- (id)init;
- (void)setValue:(id)a0 forFeatureType:(int)a1;
- (id)stringForFeatureType:(int)a0;
- (void)mergeWithFeatures:(id)a0;
- (void).cxx_destruct;
- (id)valueForFeatureType:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)setNullForFeatureType:(int)a0;
- (void)encodeWithCoder:(id)a0;

@end
