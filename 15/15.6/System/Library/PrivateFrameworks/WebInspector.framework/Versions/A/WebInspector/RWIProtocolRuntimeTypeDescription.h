@class NSString, NSArray, RWIProtocolRuntimeTypeSet;

@interface RWIProtocolRuntimeTypeDescription : RWIProtocolJSONObject

@property (nonatomic) char isValid;
@property (copy, nonatomic) NSString *leastCommonAncestor;
@property (retain, nonatomic) RWIProtocolRuntimeTypeSet *typeSet;
@property (copy, nonatomic) NSArray *structures;
@property (nonatomic) char isTruncated;

- (id)initWithIsValid:(char)a0;

@end
