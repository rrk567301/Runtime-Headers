@class NSString, MAAutoAssetSelector, NSUUID;

@interface MAAutoAssetInfoInstance : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *autoAssetClientName;
@property (readonly, retain, nonatomic) NSString *clientProcessName;
@property (readonly, nonatomic) long long clientProcessID;
@property (readonly, retain, nonatomic) MAAutoAssetSelector *clientAssetSelector;
@property (readonly, retain, nonatomic) NSUUID *frameworkInstanceUUID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initForClientName:(id)a0 withProcessName:(id)a1 withProcessID:(long long)a2 usingAssetSelector:(id)a3 associatingFrameworkUUID:(id)a4;

@end
