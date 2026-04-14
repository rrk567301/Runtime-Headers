@class NSString, NSArray;

@interface MADAutoSetConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (retain, nonatomic) NSString *autoAssetSetClientName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (retain, nonatomic) NSArray *autoAssetEntries;
@property (retain, nonatomic) NSString *latestAtomicInstanceToVend;
@property (nonatomic) BOOL inhibitImpliedScheduling;

- (id)copy;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)persistedEntryID;
- (id)assetSetEntryForAssetType:(id)a0 forAssetSpecifier:(id)a1;
- (id)firstEntryAssetType;
- (id)initForClientDomainName:(id)a0 forSetClientName:(id)a1 forAssetSetIdentifier:(id)a2 withAutoAssetEntries:(id)a3 withLatestAtomicInstanceToVend:(id)a4 inhibitingImpliedScheduling:(BOOL)a5;
- (BOOL)managesAssetSelector:(id)a0;
- (id)newSummaryWithoutEntryID;
- (BOOL)refererncesAssetType:(id)a0;

@end
