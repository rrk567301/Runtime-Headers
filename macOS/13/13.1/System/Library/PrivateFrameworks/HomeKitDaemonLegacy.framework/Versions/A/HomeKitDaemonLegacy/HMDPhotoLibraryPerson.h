@class NSUUID, NSString;

@interface HMDPhotoLibraryPerson : HMFObject

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *name;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithUUID:(id)a0 name:(id)a1;
- (id)createHMPerson;
- (id)initWithHMPerson:(id)a0;
- (void)updateHMPerson:(id)a0;

@end
