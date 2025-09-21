@class NSArray, NSData;

@interface MNStartNavigationReconnectionDetails : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isReconnecting;
@property (nonatomic) unsigned long long initialRouteSource;
@property (nonatomic) unsigned long long targetLegIndex;
@property (retain, nonatomic) NSArray *spokenAnnouncements;
@property (retain, nonatomic) NSData *serverSessionState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
