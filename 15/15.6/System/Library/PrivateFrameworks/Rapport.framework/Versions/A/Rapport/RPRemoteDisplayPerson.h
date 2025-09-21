@class NSString, NSMutableArray;

@interface RPRemoteDisplayPerson : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *accountAltDSID;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *contactID;
@property (readonly, nonatomic) NSMutableArray *discoveredDevices;
@property (readonly, nonatomic) unsigned int flags;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)addDevice:(id)a0;
- (id)initPersonWithDevice:(id)a0;
- (void)removeDevice:(id)a0;

@end
