@class FenceGroupMember, NSNumber;

@interface FenceGroup : NSObject {
    NSNumber *_fenceGroupID;
}

@property (weak) FenceGroupMember *activeMember;

+ (void)withFenceGroupsPerform:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (unsigned int)fenceGroupID;

@end
