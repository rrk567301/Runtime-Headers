@class NSString, CalDAVAccountInfoProvider, NSMutableArray;

@interface CalDAVExpandGroupOperation : CalSingleSynchronousTask

@property (readonly, retain) CalDAVAccountInfoProvider *accountInfoProvider;
@property (retain) NSString *groupIdentifier;
@property (readonly) NSMutableArray *groupMembers;

+ (id)fake404;

- (void).cxx_destruct;
- (void)expandCDGroup:(id)a0;
- (id)initWithAccountInfoProvider:(id)a0 groupIdentifier:(id)a1;
- (void)getGroupMembersSynchronously;

@end
