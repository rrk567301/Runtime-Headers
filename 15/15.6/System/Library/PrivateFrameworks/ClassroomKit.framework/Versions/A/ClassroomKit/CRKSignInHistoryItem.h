@class NSString, NSDate;

@interface CRKSignInHistoryItem : NSObject <NSSecureCoding, CRKDictionaryFormatable, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSString *deviceSerialNumber;
@property (readonly, copy, nonatomic) NSString *userGivenName;
@property (readonly, copy, nonatomic) NSString *userFamilyName;
@property (readonly, copy, nonatomic) NSString *userFullName;
@property (readonly, copy, nonatomic) NSString *userMonogram;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryValue;
- (id)initWithIdentifier:(id)a0 appleID:(id)a1 date:(id)a2 deviceName:(id)a3 deviceSerialNumber:(id)a4 userGivenName:(id)a5 userFamilyName:(id)a6 userFullName:(id)a7 userMonogram:(id)a8;
- (char)isEqualToHistoryItem:(id)a0;

@end
