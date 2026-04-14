@class NSString, NSArray;

@interface MADAutoSetTarget : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientDomainName;
@property (retain, nonatomic) NSString *assetSetIdentifier;
@property (retain, nonatomic) NSString *minTargetOSVersion;
@property (retain, nonatomic) NSString *maxTargetOSVersion;
@property (retain, nonatomic) NSArray *autoAssetEntries;

- (id)fullName;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copy;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)assetSetEntryForAssetType:(id)a0 forAssetSpecifier:(id)a1;
- (id)detailedWithoutEntryID;
- (id)firstEntryAssetType;
- (BOOL)includesEntryForAssetType:(id)a0;
- (BOOL)includesEntryForAssetType:(id)a0 forAssetSpecifier:(id)a1;
- (id)initForClientDomainName:(id)a0 forAssetSetIdentifier:(id)a1 fromMinTargetOSVersion:(id)a2 toMaxTargetOSVersion:(id)a3 asEntriesWhenTargeting:(id)a4;
- (id)newSummaryWithoutEntryID;

@end
