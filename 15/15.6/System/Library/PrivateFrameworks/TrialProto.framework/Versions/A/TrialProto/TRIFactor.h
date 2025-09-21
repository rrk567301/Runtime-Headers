@class NSString, NSMutableArray;

@interface TRIFactor : TRIPBMessage

@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) char hasId_p;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (nonatomic) int namespaceId;
@property (nonatomic) char hasNamespaceId;
@property (copy, nonatomic) NSString *namespaceName;
@property (nonatomic) char hasNamespaceName;
@property (retain, nonatomic) NSMutableArray *metadataKeysArray;
@property (readonly, nonatomic) unsigned long long metadataKeysArray_Count;
@property (copy, nonatomic) NSString *alias;
@property (nonatomic) char hasAlias;

+ (id)descriptor;

- (id)typeString;
- (id)namespaceString;
- (char)hasNamespace;
- (char)isInNamespaceName:(id)a0;

@end
