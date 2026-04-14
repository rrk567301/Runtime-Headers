@interface SPTagUserStats : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char overflowFlag;
@property (nonatomic) unsigned char crashCount;
@property (nonatomic) unsigned short multiTime;
@property (nonatomic) unsigned short nearOwnerTime;
@property (nonatomic) unsigned short wildTime;
@property (nonatomic) unsigned short ownerPlaySoundCount;
@property (nonatomic) unsigned short ownerPlaySoundTime;
@property (nonatomic) unsigned short rangingCount;
@property (nonatomic) unsigned short rangingTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
