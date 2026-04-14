@class NSString;

@interface MPAVOutputDeviceDescription : NSObject

@property (readonly, nonatomic) long long routeType;
@property (readonly, nonatomic) long long routeSubtype;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSString *modelID;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDeviceType:(long long)a0 deviceSubtype:(long long)a1 uid:(id)a2;
- (id)initWithDeviceType:(long long)a0 deviceSubtype:(long long)a1 uid:(id)a2 modelID:(id)a3;

@end
