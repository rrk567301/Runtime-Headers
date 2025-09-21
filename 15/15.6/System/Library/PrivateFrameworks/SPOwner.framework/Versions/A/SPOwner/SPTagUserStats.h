@interface SPTagUserStats : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned char overflowFlag;
@property (nonatomic) unsigned short crashCount;
@property (nonatomic) unsigned long long multiTime;
@property (nonatomic) unsigned long long nearOwnerTime;
@property (nonatomic) unsigned long long wildTime;
@property (nonatomic) unsigned int ownerPlaySoundCount;
@property (nonatomic) unsigned int ownerPlaySoundTime;
@property (nonatomic) unsigned int rangingCount;
@property (nonatomic) unsigned int rangingTime;
@property (nonatomic) unsigned char version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
