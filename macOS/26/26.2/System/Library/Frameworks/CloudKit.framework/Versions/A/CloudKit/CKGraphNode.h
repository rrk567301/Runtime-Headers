@class NSMutableSet;
@protocol NSSecureCoding, NSObject;

@interface CKGraphNode : NSObject

@property (retain, nonatomic) NSMutableSet *edges;
@property (readonly, nonatomic) NSMutableSet *indegrees;
@property (readonly, nonatomic) unsigned long long indegree;
@property (readonly, nonatomic) id<NSSecureCoding, NSObject> itemID;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)CKPropertiesDescription;
- (id)_initInternal;

@end
