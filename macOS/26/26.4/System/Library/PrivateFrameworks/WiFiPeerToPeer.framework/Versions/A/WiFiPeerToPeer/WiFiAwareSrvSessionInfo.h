@class NSString, NSData, NSArray;

@interface WiFiAwareSrvSessionInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char srvId;
@property (readonly, nonatomic) unsigned long long srvType;
@property (readonly, nonatomic) NSString *srvName;
@property (readonly, nonatomic) NSData *srvHash;
@property (readonly, nonatomic) NSArray *ndiInfos;
@property (readonly, nonatomic) unsigned int numofPeers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSrvId:(unsigned char)a0 srvType:(unsigned long long)a1 srvName:(id)a2 srvHash:(id)a3 ndiInfos:(id)a4 numofPeers:(unsigned int)a5;

@end
