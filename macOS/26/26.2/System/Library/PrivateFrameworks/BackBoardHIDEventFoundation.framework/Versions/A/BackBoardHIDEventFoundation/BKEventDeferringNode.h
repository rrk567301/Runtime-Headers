@class NSString, BKSHIDEventDeferringRule, NSMutableOrderedSet;

@interface BKEventDeferringNode : NSObject <BSDescriptionStreaming, NSCopying> {
    int _pid;
    BKSHIDEventDeferringRule *_rule;
    NSMutableOrderedSet *_supernodes;
    NSMutableOrderedSet *_subnodes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copy;
- (void)appendDescriptionToStream:(id)a0;

@end
