@class NSData;

@interface MTSThreadNetworkCredential : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *dataset;
@property (readonly, copy) NSData *borderAgentEUI;
@property (readonly, copy) NSData *borderAgentID;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDataset:(id)a0 borderAgentEUI:(id)a1 borderAgentID:(id)a2;

@end
