@class NSArray;

@interface MTRDeviceDelegateInfo : MTRDelegateInfo {
    NSArray *_interestedPathsForAttributes;
    NSArray *_interestedPathsForEvents;
}

- (id)description;
- (void).cxx_destruct;

@end
