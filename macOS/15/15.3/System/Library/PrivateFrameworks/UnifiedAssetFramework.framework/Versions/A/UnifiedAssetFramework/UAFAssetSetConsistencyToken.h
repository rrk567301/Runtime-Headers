@class NSString, UAFAssetSetExperiment, NSSet, NSUUID;

@interface UAFAssetSetConsistencyToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *assetSetName;
@property (retain, nonatomic) NSString *atomicInstance;
@property (retain, nonatomic) UAFAssetSetExperiment *experiment;
@property (retain, nonatomic) NSSet *preinstalledAssetsSummary;
@property (nonatomic) int fd;
@property (nonatomic) BOOL locked;
@property (readonly, nonatomic) NSUUID *uuid;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)unlock:(id *)a0;
- (BOOL)lock:(id *)a0;
- (id)lockURL;
- (id)initWithUUID:(id)a0 assetSetName:(id)a1 atomicInstance:(id)a2 experiment:(id)a3 preinstalledAssetsSummary:(id)a4;
- (void)invalidate:(id)a0 completion:(id /* block */)a1;

@end
