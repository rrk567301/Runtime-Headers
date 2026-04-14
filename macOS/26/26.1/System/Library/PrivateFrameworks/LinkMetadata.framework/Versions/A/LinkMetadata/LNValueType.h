@class NSArray, LNContentType;

@interface LNValueType : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) NSArray *objectClassesForCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNContentType *contentType;

- (Class)objectClass;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithContentType:(id)a0;
- (BOOL)valueIsKindOfType:(id)a0;
- (void)enumerateValuesOfValueType:(id)a0 value:(id)a1 block:(id /* block */)a2;
- (BOOL)objectIsMemberOfType:(id)a0;

@end
