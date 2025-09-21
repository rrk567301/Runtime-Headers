@class NSString, NSUUID, NSData, BKDevice, BKAccessoryGroup;

@interface BKAccessory : NSObject {
    unsigned int _type;
    NSUUID *_uuid;
    unsigned int _flags;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) char isRemovable;
@property (readonly, copy, nonatomic) NSData *uid;
@property (readonly, nonatomic) BKAccessoryGroup *accessoryGroup;
@property (readonly, nonatomic) BKDevice *device;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isAuthorized:(char *)a0 error:(id *)a1;
- (id)initWithServerAccessory:(id)a0 device:(id)a1;
- (id)serverAccessory;
- (char)isConnected:(char *)a0 error:(id *)a1;
- (char)isEqualToAccessory:(id)a0;
- (char)isEqualToServerAccessory:(id)a0;

@end
