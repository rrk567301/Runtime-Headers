@class NSNumber, NSString;

@interface SEMVectorDatabaseInfo : SEMIndexInfo

@property (readonly, nonatomic) NSNumber *localeType;
@property (readonly, nonatomic) NSString *embeddingModelVersion;
@property (readonly, nonatomic) NSNumber *isEnabled;

+ (id)readOnlyVectorDbInfoAtDirectory:(id)a0;
+ (id)writableVectorDbInfoAtDirectory:(id)a0 error:(id *)a1;

- (void)updateEmbeddingModelVersion:(id)a0;
- (void)updateEnablement:(id)a0;
- (void)updateLocaleType:(id)a0;

@end
