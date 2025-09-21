@class NSString, NSArray, NSUUID;

@interface MAAutoAssetSetInfoInstance : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *autoAssetSetClientName;
@property (readonly, retain, nonatomic) NSString *clientProcessName;
@property (readonly, nonatomic) long long clientProcessID;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (readonly, retain, nonatomic) NSString *atomicInstance;
@property (readonly, retain, nonatomic) NSArray *autoAssetEntries;
@property (readonly, retain, nonatomic) NSArray *entriesWhenTargeting;
@property (readonly, retain, nonatomic) NSUUID *frameworkInstanceUUID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initUsingClientDomain:(id)a0 forClientName:(id)a1 withProcessName:(id)a2 withProcessID:(long long)a3 forAssetSetIdentifier:(id)a4 forAtomicInstance:(id)a5 comprisedOfEntries:(id)a6 asEntriesWhenTargeting:(id)a7 associatingFrameworkUUID:(id)a8;

@end
