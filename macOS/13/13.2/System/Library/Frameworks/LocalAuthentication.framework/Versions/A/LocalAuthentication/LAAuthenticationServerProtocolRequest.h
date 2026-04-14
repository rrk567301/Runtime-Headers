@class NSUUID, NSSet, NSString;

@interface LAAuthenticationServerProtocolRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *methodsUUID;
@property (retain, nonatomic) NSSet *activeMethods;
@property (retain, nonatomic) NSUUID *usersUUID;
@property (retain, nonatomic) NSString *selectedUser;
@property (retain, nonatomic) NSUUID *entryUUID;
@property (retain, nonatomic) NSString *entryString;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)clear;

@end
