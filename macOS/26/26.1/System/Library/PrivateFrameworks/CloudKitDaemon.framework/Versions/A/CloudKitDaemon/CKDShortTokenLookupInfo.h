@class NSString, NSData, CKRoughlyEquivalentProperties;

@interface CKDShortTokenLookupInfo : NSObject <CKRoughlyEquivalent, NSCopying>

@property (retain, nonatomic) NSString *routingKey;
@property (retain, nonatomic) NSData *shortSharingTokenHashData;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (nonatomic) BOOL forceDSRefetch;
@property (retain, nonatomic) NSString *participantID;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
