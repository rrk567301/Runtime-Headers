@class NSString;

@interface VIObjectKnowledgeProperty : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
