@class FenceGroupMember, NSNumber;

@interface FenceGroup : NSObject {
    NSNumber *_fenceGroupID;
}

@property (weak) FenceGroupMember *activeMember;

+ (void)withFenceGroupsPerform:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned int)fenceGroupID;

@end
