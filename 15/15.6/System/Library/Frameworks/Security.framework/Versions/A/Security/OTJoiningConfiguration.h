@class NSString;

@interface OTJoiningConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *protocolType;
@property (retain, nonatomic) NSString *uniqueDeviceID;
@property (retain, nonatomic) NSString *uniqueClientID;
@property (retain, nonatomic) NSString *pairingUUID;
@property (nonatomic) unsigned long long epoch;
@property (nonatomic) char isInitiator;
@property (nonatomic) char testsEnabled;
@property long long timeout;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enableForTests;
- (id)initWithProtocolType:(id)a0 uniqueDeviceID:(id)a1 uniqueClientID:(id)a2 pairingUUID:(id)a3 epoch:(unsigned long long)a4 isInitiator:(char)a5;

@end
