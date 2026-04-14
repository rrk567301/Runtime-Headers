@class NSString;

@interface _EARPersonalNamedEntityRetrievalOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enablePersonalNamedEntityRetrieval;
@property (nonatomic) long long personalNamedEntityVectorSpaceType;
@property (retain, nonatomic) NSString *personalNamedEntityVectorSpacePath;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
