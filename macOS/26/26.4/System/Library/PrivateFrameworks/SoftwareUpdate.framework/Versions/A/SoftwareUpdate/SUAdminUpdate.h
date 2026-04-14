@class NSString;

@interface SUAdminUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain) NSString *productKey;
@property (readonly) long long adminAction;
@property long long restartTimeInterval;
@property BOOL useDoItLaterWhenAppropriate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithProductKey:(id)a0 adminAction:(long long)a1;

@end
