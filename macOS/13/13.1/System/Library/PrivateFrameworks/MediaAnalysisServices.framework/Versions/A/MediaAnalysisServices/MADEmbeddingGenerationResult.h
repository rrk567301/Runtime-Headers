@class NSData, NSDate;

@interface MADEmbeddingGenerationResult : MADResult

@property (readonly, nonatomic) unsigned long long embeddingType;
@property (readonly, retain, nonatomic) NSDate *assetCreationDate;
@property (readonly, retain, nonatomic) NSData *data;
@property (readonly, retain, nonatomic) NSData *checksum;
@property (readonly, retain, nonatomic) NSData *thumbnail;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEmbeddingType:(unsigned long long)a0 assetCreationDate:(id)a1 data:(id)a2 checksum:(id)a3 andThumbnail:(id)a4;

@end
