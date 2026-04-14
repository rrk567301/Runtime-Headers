@class NSError;

@interface SFCollaborationAddParticipantsAllowedResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL addParticipantsAllowed;
@property (readonly, nonatomic) NSError *error;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAddParticipantsAllowed:(BOOL)a0 error:(id)a1;

@end
