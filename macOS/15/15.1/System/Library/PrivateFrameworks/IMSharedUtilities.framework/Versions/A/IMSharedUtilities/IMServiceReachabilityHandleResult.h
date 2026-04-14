@class NSString;

@interface IMServiceReachabilityHandleResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *handleID;
@property (retain, nonatomic) NSString *service;
@property (nonatomic, getter=isReachable, setter=setReachable:) BOOL reachable;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createDictionary;
- (id)initWithHandleID:(id)a0 service:(id)a1 isReachable:(BOOL)a2;

@end
