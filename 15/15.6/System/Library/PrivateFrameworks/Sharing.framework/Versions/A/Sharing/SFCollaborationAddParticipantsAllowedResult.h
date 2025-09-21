@class NSError;

@interface SFCollaborationAddParticipantsAllowedResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char addParticipantsAllowed;
@property (readonly, nonatomic) NSError *error;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAddParticipantsAllowed:(char)a0 error:(id)a1;

@end
