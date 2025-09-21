@class NSString, COClusterMember;

@interface COMessagingSessionInfo : NSObject

@property (readonly, copy, nonatomic) NSString *subTopic;
@property (readonly, copy, nonatomic) COClusterMember *member;
@property (readonly, nonatomic) char producedSession;

- (void).cxx_destruct;
- (id)initWithSubTopic:(id)a0 member:(id)a1 produced:(char)a2;

@end
