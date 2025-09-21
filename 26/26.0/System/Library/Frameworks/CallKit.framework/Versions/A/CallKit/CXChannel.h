@class NSSet, NSString, NSUUID;

@interface CXChannel : NSObject <CXSecureCoding>

@property (class, readonly, nonatomic) NSSet *unarchivedObjectClasses;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) long long transmissionMode;
@property (readonly, nonatomic) NSUUID *UUID;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToChannel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)initWithUUID:(id)a0 transmissionMode:(long long)a1;
- (BOOL)isEquivalentToChannel:(id)a0;

@end
