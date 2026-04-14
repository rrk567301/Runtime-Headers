@class NSString, NSArray;

@interface _IDSRegisteredAccount : NSObject

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) NSArray *registeredDeviceInfo;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0 service:(id)a1 registeredDeviceInfo:(id)a2;

@end
