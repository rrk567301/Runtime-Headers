@class NSString, SLSecurityScopedURL, NSData, NSError;

@interface SLShareableContentLoadResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *archivedObjectClassName;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) Class archivedObjectClass;
@property (readonly, nonatomic) SLSecurityScopedURL *urlWrapper;
@property (readonly, nonatomic) char wasOpenedInPlace;
@property (readonly, copy, nonatomic) NSError *error;

+ (id)resultWithError:(id)a0;
+ (id)resultWithData:(id)a0 archivedObjectClass:(Class)a1 urlWrapper:(id)a2 wasOpenedInPlace:(char)a3 error:(id)a4;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWithData:(id)a0 archivedObjectClassName:(id)a1 urlWrapper:(id)a2 wasOpenedInPlace:(char)a3 error:(id)a4;

@end
