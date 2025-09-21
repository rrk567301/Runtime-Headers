@class _CLRangingPeer, NSNumber, NSDate;

@interface _CLRangingPeerDistance : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) _CLRangingPeer *peer;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSNumber *distanceMeters;
@property (readonly, copy, nonatomic) NSNumber *accuracyMeters;
@property (readonly, nonatomic, getter=isInitiator) char initiator;
@property (readonly, nonatomic) char shouldUnlock;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPeer:(id)a0 timestamp:(id)a1 distanceMeters:(id)a2 accuracyMeters:(id)a3 initiator:(char)a4;
- (id)initWithPeer:(id)a0 date:(id)a1 distanceMeters:(id)a2 accuracyMeters:(id)a3 initiator:(char)a4;
- (id)initWithPeer:(id)a0 date:(id)a1 distanceMeters:(id)a2 accuracyMeters:(id)a3 initiator:(char)a4 shouldUnlock:(char)a5;
- (char)initiator;

@end
