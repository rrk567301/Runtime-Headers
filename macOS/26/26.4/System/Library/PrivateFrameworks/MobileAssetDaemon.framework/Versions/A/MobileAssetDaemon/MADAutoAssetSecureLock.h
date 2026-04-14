@class NSString, NSMutableDictionary;

@interface MADAutoAssetSecureLock : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientProcessName;
@property (nonatomic) long long clientProcessID;
@property (retain, nonatomic) NSMutableDictionary *lockedAssetSelectors;

- (id)name;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initProcessLifeLock:(id)a0 forAssetSelector:(id)a1 forClientProcessName:(id)a2 forClientProcessID:(long long)a3;

@end
