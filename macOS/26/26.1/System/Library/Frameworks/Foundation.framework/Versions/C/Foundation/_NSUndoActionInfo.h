@class NSUUID;

@interface _NSUndoActionInfo : NSObject <NSSecureCoding, NSCopying> {
    NSUUID *_uuid;
    id _name;
    BOOL _discardable;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 name:(id)a1 discardable:(BOOL)a2;

@end
