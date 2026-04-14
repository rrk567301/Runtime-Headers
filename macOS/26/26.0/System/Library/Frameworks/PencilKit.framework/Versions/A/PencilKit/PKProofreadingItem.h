@class NSArray;

@interface PKProofreadingItem : PKDetectionItem

@property (readonly, nonatomic) NSArray *chStrokeIdentifiers;
@property (readonly, nonatomic) NSArray *replacementStrings;

+ (id)proofreadingItemWithQueryItem:(id)a0 sessionManager:(id)a1;

- (id)strokeColor;
- (int)resultType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)drawing;
- (id)_baselinePath;
- (void)invalidateUUID;

@end
