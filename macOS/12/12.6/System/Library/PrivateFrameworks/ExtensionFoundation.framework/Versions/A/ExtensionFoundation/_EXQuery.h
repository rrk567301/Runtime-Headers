@class NSString, NSPredicate;

@interface _EXQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *extensionPointIdentifier;
@property unsigned int platform;
@property (retain) NSPredicate *predicate;

+ (id)executeQueries:(id)a0;
+ (void)executeQueries:(id)a0 completionHandler:(id /* block */)a1;
+ (id)asyncQueryQueue;
+ (id)executeQuery:(id)a0;
+ (void)executeQuery:(id)a0 completionHandler:(id /* block */)a1;
+ (id)extensionPointIdentifierQuery:(id)a0;
+ (id)extensionPointIdentifierQuery:(id)a0 platform:(unsigned int)a1;
+ (id)allExtensionsQuery;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)matches:(id)a0;
- (BOOL)matchesRecord:(id)a0;
- (BOOL)isEqualToQuery:(id)a0;

@end
