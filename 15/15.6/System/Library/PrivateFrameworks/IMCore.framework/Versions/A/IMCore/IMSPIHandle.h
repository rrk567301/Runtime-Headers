@class NSString, IMHandle;

@interface IMSPIHandle : NSObject {
    IMHandle *_imHandle;
    char _haveFetchedIMHandle;
}

@property (retain) NSString *address;
@property char isMe;
@property (retain) NSString *countryCode;
@property (readonly) char isBusiness;
@property (readonly) NSString *businessName;
@property (readonly) NSString *displayName;
@property (readonly) NSString *cnContactID;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)handle;
- (id)initWithAddress:(id)a0 countryCode:(id)a1 isMe:(char)a2;

@end
