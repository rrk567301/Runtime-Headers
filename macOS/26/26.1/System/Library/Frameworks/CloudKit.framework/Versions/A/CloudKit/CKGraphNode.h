@class NSMutableSet;
@protocol NSSecureCoding, NSObject;

@interface CKGraphNode : NSObject

@property (retain, nonatomic) NSMutableSet *edges;
@property (readonly, nonatomic) NSMutableSet *indegrees;
@property (readonly, nonatomic) unsigned long long indegree;
@property (readonly, nonatomic) id<NSSecureCoding, NSObject> itemID;

- (id)CKPropertiesDescription;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initInternal;
- (id)init;

@end
