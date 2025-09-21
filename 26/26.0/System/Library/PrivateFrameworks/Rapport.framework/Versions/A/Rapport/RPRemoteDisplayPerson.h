@class NSString, NSMutableArray;

@interface RPRemoteDisplayPerson : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accountAltDSID;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *contactID;
@property (readonly, nonatomic) NSMutableArray *discoveredDevices;
@property (readonly, nonatomic) unsigned int flags;

- (void)addDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)removeDevice:(id)a0;
- (void).cxx_destruct;
- (id)initPersonWithDevice:(id)a0;

@end
