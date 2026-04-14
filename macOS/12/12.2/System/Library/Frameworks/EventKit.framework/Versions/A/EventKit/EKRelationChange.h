@class NSString, EKChangeSet;

@interface EKRelationChange : NSObject <NSCopying>

@property (retain) NSString *uniqueIdentifier;
@property (retain) NSString *relationChangeKey;
@property (retain) EKChangeSet *changeSet;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
