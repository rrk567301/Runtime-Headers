@interface PHAssetReference : PHObjectReference

@property (readonly, nonatomic, getter=isRecovered) BOOL recovered;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly, nonatomic) BOOL needsSensitivityProtection;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;

+ (id)representedType;
+ (id)referenceForAsset:(id)a0;

- (id)dictionaryForReferenceType:(id)a0;
- (id)initWithDictionary:(id)a0 referenceType:(id)a1;
- (id)initWithLocalIdentifier:(id)a0 libraryURL:(id)a1 mediaType:(long long)a2 subtypes:(unsigned long long)a3 sourceType:(unsigned long long)a4 needsSensitivityProtection:(BOOL)a5 isHidden:(BOOL)a6 isTrashed:(BOOL)a7 isRecovered:(BOOL)a8;

@end
