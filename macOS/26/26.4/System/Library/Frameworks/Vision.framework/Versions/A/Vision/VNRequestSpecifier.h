@class NSArray, NSString;

@interface VNRequestSpecifier : NSObject <NSCopying, NSSecureCoding, VNRequestSpecifying> {
    unsigned int _requestClassCode;
    unsigned long long _requestRevision;
    NSString *_cachedRequestClassName;
    Class _cachedRequestClass;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int requestClassCode;
@property (readonly, copy) NSArray *allModelEquivalents;
@property (readonly) BOOL observationProvidesBoundsNormalizedToROI;
@property (readonly) BOOL isPublicRequestClass;
@property (readonly) BOOL isPrivateRequestClass;
@property (readonly) BOOL isPublicRevision;
@property (readonly) BOOL isPrivateRevision;
@property (readonly) BOOL isPublic;
@property (readonly) BOOL isPrivate;
@property (readonly, nonatomic) unsigned long long requestRevision;
@property (readonly, copy) NSString *requestClassName;

+ (id)availablePrivateRequestClassNames;
+ (id)specifierForRequest:(id)a0;
+ (id)specifierForRequestClassCode:(unsigned int *)a0 revision:(unsigned long long)a1 error:(id *)a2;
+ (id)allAvailableRequestClassNames;
+ (id)availableRequestClassNames;
+ (id)specifierForRequestClassName:(id)a0 revision:(unsigned long long)a1 error:(id *)a2;
+ (id)specifierForRequestClass:(Class)a0 revision:(unsigned long long)a1 error:(id *)a2;

- (id)initWithRequestClass:(Class)a0 name:(id)a1 code:(unsigned int)a2 revision:(unsigned long long)a3;
- (BOOL)hasModelEquivalencyToRequestSpecifier:(id)a0;
- (BOOL)specifiesRequestClass:(Class)a0 withAnyRevision:(unsigned long long)a1;
- (BOOL)specifiesRequestClassName:(id)a0 withAnyRevision:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)requestClassAndReturnError:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)specifiesAnyRequestClassName:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)specifiesRequestClass:(Class)a0;
- (id)description;
- (BOOL)specifiesRequestClass:(Class)a0 revision:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)specifiesRequestClassName:(id)a0;
- (BOOL)representsSupportedRequestAndReturnError:(id *)a0;
- (BOOL)specifiesRequestClassName:(id)a0 revision:(unsigned long long)a1;
- (BOOL)specifiesAnyRequestClass:(Class)a0;

@end
