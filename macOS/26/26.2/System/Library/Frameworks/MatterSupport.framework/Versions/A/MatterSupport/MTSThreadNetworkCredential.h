@class NSData;

@interface MTSThreadNetworkCredential : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *dataset;
@property (readonly, copy) NSData *borderAgentEUI;
@property (readonly, copy) NSData *borderAgentID;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDataset:(id)a0 borderAgentEUI:(id)a1 borderAgentID:(id)a2;

@end
