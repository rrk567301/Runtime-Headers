@class NSString;

@interface HMAccessoryInfoAccount : NSObject

@property (readonly, copy) NSString *username;
@property (readonly, copy) NSString *aaAltDSID;
@property (readonly, copy) NSString *amsAltDSID;
@property (readonly) BOOL signedIn;

- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)protoData;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithUsername:(id)a0 aaAltDSID:(id)a1 amsAltDSID:(id)a2 signedIn:(BOOL)a3;
- (id)protoPayload;

@end
