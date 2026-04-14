@class NSMutableDictionary;

@interface ATXModeFeatureSet : NSObject <NSSecureCoding> {
    NSMutableDictionary *_features;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)boolValueForFeatureType:(int)a0;
- (id)valueForFeatureType:(int)a0;
- (id)initWithDictionary:(id)a0;
- (void)_enumerateFeaturesUsingBlock:(id /* block */)a0;
- (void)setString:(id)a0 forFeatureType:(int)a1;
- (id)stringForFeatureType:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (void)mergeWithFeatures:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setNullForFeatureType:(int)a0;
- (id)init;
- (void)setValue:(BOOL)a0 forBinaryFeatureOfType:(int)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forFeatureType:(int)a1;

@end
