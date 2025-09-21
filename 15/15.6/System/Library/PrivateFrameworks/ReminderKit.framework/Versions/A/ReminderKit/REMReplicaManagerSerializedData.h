@class NSData;

@interface REMReplicaManagerSerializedData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isRepresentingDiscardedReplicaManager;
@property (readonly, nonatomic) NSData *managerData;
@property (readonly, nonatomic) unsigned long long version;

+ (id)serializedDataRepresentingDiscardedReplicaManager;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithManagerData:(id)a0 version:(unsigned long long)a1;

@end
