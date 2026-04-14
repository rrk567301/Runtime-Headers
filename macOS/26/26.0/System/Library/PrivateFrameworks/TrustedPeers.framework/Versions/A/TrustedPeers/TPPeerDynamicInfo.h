@class NSSet, TPTypedSignedData, NSDictionary, NSData;

@interface TPPeerDynamicInfo : NSObject

@property (retain, nonatomic) TPTypedSignedData *tsd;
@property (readonly, nonatomic) unsigned long long clock;
@property (readonly, nonatomic) NSSet *includedPeerIDs;
@property (readonly, nonatomic) NSSet *excludedPeerIDs;
@property (readonly, nonatomic) NSDictionary *dispositions;
@property (readonly, nonatomic) NSSet *preapprovals;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *sig;

+ (id)dynamicInfoWithData:(id)a0 sig:(id)a1;
+ (id)dynamicInfoPBWithClock:(unsigned long long)a0 includedPeerIDs:(id)a1 excludedPeerIDs:(id)a2 dispositions:(id)a3 preapprovals:(id)a4;
+ (id)dynamicInfoWithClock:(unsigned long long)a0 includedPeerIDs:(id)a1 excludedPeerIDs:(id)a2 dispositions:(id)a3 preapprovals:(id)a4 signingKeyPair:(id)a5 error:(id *)a6;

- (id)pb;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToPeerDynamicInfo:(id)a0;
- (BOOL)checkSignatureWithKey:(id)a0;
- (id)description;
- (id)initWithObj:(id)a0 tsd:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
