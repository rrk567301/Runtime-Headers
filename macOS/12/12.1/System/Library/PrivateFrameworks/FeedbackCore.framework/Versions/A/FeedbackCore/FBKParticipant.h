@class NSArray, NSString, NSSet, NSImage, NSNumber;

@interface FBKParticipant : FBKManagedFeedbackObject {
    NSImage *_cachedImage;
}

@property (class, readonly, nonatomic) NSArray *sortDescriptors;

@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSNumber *remoteID;
@property (retain, nonatomic) NSSet *assignedFeedback;
@property (retain, nonatomic) NSSet *followups;
@property (retain, nonatomic) NSSet *originatedFeedback;
@property (retain, nonatomic) NSSet *teams;
@property (readonly, nonatomic) NSString *fullName;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)currentParticipantForContext:(id)a0;
+ (id)keyPathsForValuesAffectingFullName;

- (void).cxx_destruct;
- (void)setPropertiesFromJSONObject:(id)a0;

@end
