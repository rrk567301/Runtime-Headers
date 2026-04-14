@class NSMutableDictionary;

@interface CPLFeatureVersionHistory : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_anchorToVersion;
    NSMutableDictionary *_versionToAnchor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long currentFeatureVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)enumerateHistoryWithBlock:(id /* block */)a0;
- (id)initWithCurrentFeatureVersion:(long long)a0;
- (void)addSyncAnchor:(id)a0 forFeatureVersion:(long long)a1;
- (id)syncAnchorForFeatureVersion:(long long)a0;
- (long long)featureVersionForSyncAnchor:(id)a0;

@end
