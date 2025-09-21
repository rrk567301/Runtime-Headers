@class NSString, NSDictionary, NSData;

@interface IMServiceReachabilityHandleResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *handleID;
@property (retain, nonatomic) NSString *service;
@property (nonatomic, getter=isReachable, setter=setReachable:) char reachable;
@property (retain, nonatomic) NSDictionary *persistentMenuDictionary;
@property (retain, nonatomic) NSDictionary *brandInfoDictionary;
@property (retain, nonatomic) NSData *brandLogoData;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)brandInfoData;
- (id)createDictionary;
- (id)initWithHandleID:(id)a0 service:(id)a1 isReachable:(char)a2;
- (id)initWithHandleID:(id)a0 service:(id)a1 isReachable:(char)a2 persistentMenuDictionary:(id)a3 brandInfoDictionary:(id)a4 brandLogoData:(id)a5;
- (id)persistentMenuData;

@end
