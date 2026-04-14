@class NSString;

@interface EKBatchChangeInfo : NSObject

@property (retain) NSString *currentUID;
@property (retain) NSString *originalUID;
@property BOOL changePending;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)affectsObject:(id)a0;
- (id)updatedIdentifier:(id)a0;
- (id)relatedIdentifier:(id)a0;
- (id)initWithCurrentUID:(id)a0 originalUID:(id)a1;

@end
