@class NSString;

@interface SFPersonalNamedEntityRetrievalOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL enablePersonalNamedEntityRetrieval;
@property (readonly, nonatomic) unsigned long long vectorSpaceType;
@property (readonly, nonatomic) NSString *personalNamedEntityVectorSpacePath;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEnablePersonalNamedEntityRetrieval:(BOOL)a0 vectorSpaceType:(unsigned long long)a1 personalNamedEntityVectorSpacePath:(id)a2;

@end
