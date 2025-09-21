@class NSString;

@interface ICTVUserState : NSObject <ICMutableTVUserState, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isActiveWatchKitUser) char activeWatchKitUser;
@property (nonatomic, getter=isFrozen) char frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBlock:(id /* block */)a0;
- (id)copyWithBlock:(id /* block */)a0;

@end
