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

- (id)copy;
- (void)appendDescriptionToStream:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
