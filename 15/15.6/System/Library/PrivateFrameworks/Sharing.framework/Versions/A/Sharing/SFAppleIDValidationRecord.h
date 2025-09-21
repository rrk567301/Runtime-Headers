@class NSString, NSArray, NSData, NSDate, NSNumber;

@interface SFAppleIDValidationRecord : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char isInvalid;
@property (readonly, nonatomic) char needsUpdate;
@property (retain, nonatomic) NSDate *nextCheckDate;
@property (nonatomic) unsigned long long suggestedValidDuration;
@property (retain, nonatomic) NSArray *validatedEmailHashes;
@property (retain, nonatomic) NSArray *validatedPhoneHashes;
@property (retain, nonatomic) NSDate *validStartDate;
@property (retain, nonatomic) NSNumber *version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)expirationDate;
- (char)isEqualToValidationRecord:(id)a0;

@end
