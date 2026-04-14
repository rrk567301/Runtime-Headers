@interface EKOrganizer : EKParticipant {
    BOOL _isCurrentUserForSharing;
}

+ (Class)frozenClass;
+ (id)organizerWithName:(id)a0 url:(id)a1 email:(id)a2 phoneNumber:(id)a3 encodedLikenessData:(id)a4 isCurrentUserForScheduling:(BOOL)a5 isCurrentUserForSharing:(BOOL)a6;
+ (BOOL)_object:(id)a0 equalsObject:(id)a1 forKeys:(id)a2 compareImmutableKeys:(BOOL)a3 ignoringProperties:(id)a4;
+ (id)organizerWithName:(id)a0 url:(id)a1;

- (id)firstName;
- (id)lastName;
- (BOOL)isCurrentUserForSharing;
- (id)initWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 address:(id)a3 isCurrentUser:(BOOL)a4;
- (id)initWithName:(id)a0 url:(id)a1 email:(id)a2 phoneNumber:(id)a3 encodedLikenessData:(id)a4 isCurrentUserForScheduling:(BOOL)a5 isCurrentUserForSharing:(BOOL)a6;

@end
