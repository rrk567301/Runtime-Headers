@class NSString, NSUUID, NSData;

@interface CBDeviceIdentity : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSString *accountID;
@property (copy, nonatomic) NSUUID *bluetoothIdentifier;
@property (copy, nonatomic) NSString *contactID;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *idsDeviceID;
@property (copy, nonatomic) NSData *irkData;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int type;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
