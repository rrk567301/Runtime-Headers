@class NSString, NSDictionary, WFAction;

@interface WFActionRequest : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) NSDictionary *serializedParameters;
@property (retain, nonatomic) WFAction *result;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithActionIdentifier:(id)a0 serializedParameters:(id)a1;

@end
