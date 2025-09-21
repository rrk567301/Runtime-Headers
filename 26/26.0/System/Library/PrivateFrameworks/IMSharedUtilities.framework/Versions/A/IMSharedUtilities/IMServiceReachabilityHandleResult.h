@class NSString, NSDictionary, NSData;

@interface IMServiceReachabilityHandleResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *handleID;
@property (retain, nonatomic) NSString *service;
@property (nonatomic, getter=isReachable, setter=setReachable:) BOOL reachable;
@property (nonatomic, setter=setSupportsEncryption:) BOOL supportsEncryption;
@property (retain, nonatomic) NSDictionary *persistentMenuDictionary;
@property (retain, nonatomic) NSDictionary *brandInfoDictionary;
@property (retain, nonatomic) NSData *brandLogoData;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)brandInfoData;
- (id)createDictionary;
- (id)initWithHandleID:(id)a0 service:(id)a1 isReachable:(BOOL)a2 supportsEncryption:(BOOL)a3;
- (id)initWithHandleID:(id)a0 service:(id)a1 isReachable:(BOOL)a2 supportsEncryption:(BOOL)a3 persistentMenuDictionary:(id)a4 brandInfoDictionary:(id)a5 brandLogoData:(id)a6;
- (id)persistentMenuData;

@end
