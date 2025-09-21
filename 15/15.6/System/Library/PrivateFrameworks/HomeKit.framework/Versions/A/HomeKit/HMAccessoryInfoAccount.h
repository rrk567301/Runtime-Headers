@class NSString;

@interface HMAccessoryInfoAccount : NSObject

@property (readonly, copy) NSString *username;
@property (readonly, copy) NSString *aaAltDSID;
@property (readonly, copy) NSString *amsAltDSID;
@property (readonly) char signedIn;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)protoData;
- (id)initWithProtoData:(id)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithUsername:(id)a0 aaAltDSID:(id)a1 amsAltDSID:(id)a2 signedIn:(char)a3;
- (id)protoPayload;

@end
