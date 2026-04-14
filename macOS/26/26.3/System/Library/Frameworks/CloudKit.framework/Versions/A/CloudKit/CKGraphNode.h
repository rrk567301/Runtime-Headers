@class NSMutableSet;
@protocol NSSecureCoding, NSObject;

@interface CKGraphNode : NSObject

@property (retain, nonatomic) NSMutableSet *edges;
@property (readonly, nonatomic) NSMutableSet *indegrees;
@property (readonly, nonatomic) unsigned long long indegree;
@property (readonly, nonatomic) id<NSSecureCoding, NSObject> itemID;

- (id)CKPropertiesDescription;
- (id)description;
- (id)init;
- (id)_initInternal;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
