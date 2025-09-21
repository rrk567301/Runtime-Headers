@class NSUUID, NSString, SWCollaborationHighlight;

@interface TUCollaborationNotice : NSObject <TUConversationNoticeProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SWCollaborationHighlight *collaboration;
@property (readonly, nonatomic) NSUUID *UUID;
@property (nonatomic) long long sessionEventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0;
- (char)isEqualToCollaborationNotice:(id)a0;

@end
