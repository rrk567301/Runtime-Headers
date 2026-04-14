@protocol WFPropertyListObject;

@interface WFWorkflowRunQueueDescriptor : NSObject <NSCopying> {
    unsigned long long _type;
    id<WFPropertyListObject> _queueIdentifier;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 identifier:(id)a1;

@end
