@class NSArray, SWCollaborationMetadata;

@interface SWUpdateCollaborationParticipantsAction : SWAction <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SWCollaborationMetadata *collaborationMetadata;
@property (retain, nonatomic) NSArray *addedIdentities;
@property (retain, nonatomic) NSArray *removedIdentities;

+ (id)actionWithMetadata:(id)a0 addedIdentities:(id)a1 removedIdentites:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToAction:(id)a0;
- (id)initWithMetadata:(id)a0 addedIdentities:(id)a1 removedIdentites:(id)a2;

@end
