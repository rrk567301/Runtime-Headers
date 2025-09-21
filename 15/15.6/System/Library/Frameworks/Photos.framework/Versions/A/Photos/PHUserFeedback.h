@class NSString, NSDate;

@interface PHUserFeedback : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *uuid;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long feature;
@property (readonly) unsigned long long creationType;
@property (readonly, copy) NSString *context;
@property (readonly, copy) NSDate *lastModifiedDate;

+ (id)_contextForMemoryFeature:(id)a0;
+ (id)_contextForSongIdentifiers:(id)a0;
+ (unsigned long long)_feedbackFeatureForMemoryFeature:(id)a0;
+ (unsigned long long)mergeFeedbackType:(unsigned long long)a0 withOtherFeedbackType:(unsigned long long)a1;
+ (id)negativeAutonamingUserFeedbackForPerson:(id)a0 rejectedContactIdentifier:(id)a1;
+ (id)negativeAutonamingUserFeedbackForPerson:(id)a0 rejectedName:(id)a1;
+ (id)negativeUserFeedbackForMemoryFeature:(id)a0 existingFeedback:(id)a1;
+ (id)negativeUserFeedbackForMemoryMusicWithSongIdentifier:(id)a0 existingFeedback:(id)a1;
+ (id)negativeUserFeedbackForPerson:(id)a0;
+ (unsigned long long)sumFeedbackType:(unsigned long long)a0 withOtherFeedbackType:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)contextAsDateIntervalWithError:(id *)a0;
- (id)contextAsDateWithError:(id *)a0;
- (id)contextAsListOfSongIdentifiersWithError:(id *)a0;
- (id)contextAsLocationWithError:(id *)a0;
- (id)contextAsStringWithError:(id *)a0;
- (id)initWithType:(unsigned long long)a0 feature:(unsigned long long)a1 context:(id)a2;
- (id)initWithType:(unsigned long long)a0 feature:(unsigned long long)a1 context:(id)a2 lastModifiedDate:(id)a3;
- (id)initWithUUID:(id)a0 type:(unsigned long long)a1 feature:(unsigned long long)a2 creationType:(unsigned long long)a3 context:(id)a4 lastModifiedDate:(id)a5;
- (char)isEqualWithoutUUID:(id)a0;

@end
