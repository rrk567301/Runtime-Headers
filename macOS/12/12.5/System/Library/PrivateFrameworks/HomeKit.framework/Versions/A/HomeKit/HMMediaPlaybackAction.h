@class MPPlaybackArchive, NSSet, NSUUID, NSString, HMFUnfairLock, NSNumber;

@interface HMMediaPlaybackAction : HMAction <NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *mediaProfiles;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSNumber *volume;
@property (retain, nonatomic) MPPlaybackArchive *playbackArchive;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedForHome:(id)a0;
+ (id)mediaPlaybackActionWithProtoBuf:(id)a0 home:(id)a1;
+ (id)_actionWithInfo:(id)a0 home:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithUUID:(id)a0;
- (BOOL)_handleUpdates:(id)a0;
- (id)_serializeForAdd;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)encodeAsProtoBuf;
- (id)accessoryProfiles;
- (id)initWithMediaProfiles:(id)a0 playbackState:(long long)a1 volume:(id)a2 playbackArchive:(id)a3 uuid:(id)a4;
- (void)__configureWithContext:(id)a0 actionSet:(id)a1;
- (id)initWithPlaybackAction:(id)a0 uuid:(id)a1;
- (void)_updateWithAction:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_updateWithSerializedAction:(id)a0 home:(id)a1;
- (id)initWithMediaProfiles:(id)a0 playbackState:(long long)a1 volume:(id)a2 playbackArchive:(id)a3;
- (void)updateWithAction:(id)a0 completionHandler:(id /* block */)a1;

@end
