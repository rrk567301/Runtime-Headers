@interface EKFrozenOrganizer : EKFrozenParticipant {
    BOOL isCurrentUserForSharing;
}

+ (Class)meltedClass;
+ (id)organizerWithName:(id)a0 url:(id)a1 emailAddress:(id)a2 phoneNumber:(id)a3 encodedLikenessData:(id)a4 isCurrentUserForScheduling:(BOOL)a5;

- (BOOL)isCurrentUserForSharing;
- (id)initWithObject:(id)a0 createPartialObject:(BOOL)a1 preFrozenRelationshipObjects:(id)a2;
- (id)initWithName:(id)a0 url:(id)a1 emailAddress:(id)a2 phoneNumber:(id)a3 encodedLikenessData:(id)a4 isCurrentUserForScheduling:(BOOL)a5;

@end
