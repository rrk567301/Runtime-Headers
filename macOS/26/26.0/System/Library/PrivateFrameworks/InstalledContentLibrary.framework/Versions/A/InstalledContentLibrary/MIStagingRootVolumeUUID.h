@class NSUUID, NSString;

@interface MIStagingRootVolumeUUID : NSObject <NSCopying, NSSecureCoding, MIStagingRootProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long extensionHandle;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSUUID *volumeUUID;
@property (readonly, nonatomic) unsigned long long stagingSubsystem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_runWithLock:(id /* block */)a0;
- (id)initWithVolumeUUID:(id)a0 stagingSubsystem:(unsigned long long)a1;
- (id)resolveRootWithError:(id *)a0;

@end
