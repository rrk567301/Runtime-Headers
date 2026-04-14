@class SWHighlightCenter;

@interface IMDCollaborationNoticeTypeGenerator : NSObject

@property (readonly, nonatomic) SWHighlightCenter *highlightCenter;

+ (id)sharedGenerator;

- (id)init;
- (void).cxx_destruct;
- (long long)typeForHighlightEvent:(id)a0;
- (long long)processMentionForPersonHandle:(id)a0;
- (long long)processMentionForPersonIdentity:(id)a0 highlightURL:(id)a1;

@end
