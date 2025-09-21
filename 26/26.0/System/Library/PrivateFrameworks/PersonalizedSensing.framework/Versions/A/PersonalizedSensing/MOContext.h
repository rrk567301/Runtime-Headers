@class NSString, NSUUID, NSArray, NSDate;

@interface MOContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *associatedRequestID;
@property (retain, nonatomic) NSString *associatedBundleID;
@property (retain, nonatomic) NSString *associatedSuggestionID;
@property (retain, nonatomic) NSUUID *bundleContentIdentifier;
@property (readonly, copy, nonatomic) NSUUID *contextIdentifier;
@property (copy, nonatomic) NSArray *contextStrings;
@property (readonly, nonatomic) NSDate *contextCreationTimestamp;
@property (nonatomic) unsigned long long associatedPatternType;
@property (copy, nonatomic) NSArray *associatedLocations;
@property (copy, nonatomic) NSArray *associatedContacts;
@property (copy, nonatomic) NSArray *associatedActivities;
@property (copy, nonatomic) NSArray *associatedPhotos;
@property (copy, nonatomic) NSArray *associatedTime;
@property (copy, nonatomic) NSArray *associatedMusic;
@property (nonatomic) unsigned long long actionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContextIdentifier:(id)a0 contextCreationTimestamp:(id)a1;
- (BOOL)isWithinDistanceFromLocation:(id)a0 maxDistance:(double)a1;

@end
