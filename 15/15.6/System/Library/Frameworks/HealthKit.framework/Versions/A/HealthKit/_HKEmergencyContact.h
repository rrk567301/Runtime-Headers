@class NSString, NSNumber;

@interface _HKEmergencyContact : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *nameRecordID;
@property (copy, nonatomic) NSString *nameContactIdentifier;
@property (copy, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSNumber *phoneNumberPropertyID;
@property (copy, nonatomic) NSString *phoneNumberContactIdentifier;
@property (copy, nonatomic) NSString *phoneNumberLabel;
@property (copy, nonatomic) NSString *relationship;

+ (id)emergencyContactUsingSimCardNumberWithContact:(id)a0 property:(id)a1;
+ (id)emergencyContactWithContact:(id)a0 property:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToSyncedContact:(id)a0;

@end
