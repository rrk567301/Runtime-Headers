@class NSString;

@interface PUPickerAssetCollectionSuggestion : NSObject <NSSecureCoding, PUPickerSuggestion> {
    void /* unknown type, empty encoding */ localIdentifier;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ extendedCuratedAssetsOnly;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldReverseSortOrder;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocalIdentifier:(id)a0 extendedCuratedAssetsOnly:(char)a1 shouldReverseSortOrder:(char)a2;

@end
