@class NSArray;

@interface PKProofreadingItem : PKDetectionItem

@property (readonly, nonatomic) NSArray *chStrokeIdentifiers;
@property (readonly, nonatomic) NSArray *replacementStrings;

+ (id)proofreadingItemWithQueryItem:(id)a0 sessionManager:(id)a1;

- (int)resultType;
- (id)strokeColor;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)drawing;
- (id)_baselinePath;
- (void)invalidateUUID;

@end
