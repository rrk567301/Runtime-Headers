@class NSString;

@interface VIObjectKnowledgeProperty : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 value:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
