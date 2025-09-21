@class NSMutableSet;
@protocol NSSecureCoding, NSObject;

@interface CKGraphNode : NSObject

@property (retain, nonatomic) NSMutableSet *edges;
@property (readonly, nonatomic) NSMutableSet *indegrees;
@property (readonly, nonatomic) unsigned long long indegree;
@property (readonly, nonatomic) id<NSSecureCoding, NSObject> itemID;

- (id)CKPropertiesDescription;
- (id)init;
- (id)_initInternal;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
