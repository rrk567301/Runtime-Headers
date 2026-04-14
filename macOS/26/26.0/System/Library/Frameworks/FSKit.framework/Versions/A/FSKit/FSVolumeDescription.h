@class FSVolumeIdentifier, FSFileName;

@interface FSVolumeDescription : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) FSVolumeIdentifier *volumeID;
@property (readonly, copy) FSFileName *volumeName;
@property (readonly) long long volumeState;

+ (id)volumeDescriptionWithID:(id)a0 name:(id)a1 state:(long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithID:(id)a0 name:(id)a1 state:(long long)a2;

@end
