@class NSMutableSet;
@protocol NSSecureCoding, NSObject;

@interface CKGraphNode : NSObject

@property (retain, nonatomic) NSMutableSet *edges;
@property (readonly, nonatomic) NSMutableSet *indegrees;
@property (readonly, nonatomic) unsigned long long indegree;
@property (readonly, nonatomic) id<NSSecureCoding, NSObject> itemID;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (unsigned long long)hash;
- (id)init;
- (id)_initInternal;
- (id)description;

@end
