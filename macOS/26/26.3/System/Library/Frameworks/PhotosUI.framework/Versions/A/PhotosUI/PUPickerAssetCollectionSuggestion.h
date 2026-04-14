@class NSString;

@interface PUPickerAssetCollectionSuggestion : NSObject <NSSecureCoding, PUPickerSuggestion> {
    void /* function */ localIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) BOOL extendedCuratedAssetsOnly;
@property (nonatomic, readonly) BOOL shouldReverseSortOrder;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLocalIdentifier:(id)a0 extendedCuratedAssetsOnly:(BOOL)a1 shouldReverseSortOrder:(BOOL)a2;

@end
