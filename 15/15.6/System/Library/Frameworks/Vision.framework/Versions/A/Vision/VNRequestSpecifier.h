@class NSArray, NSString;

@interface VNRequestSpecifier : NSObject <NSCopying, NSSecureCoding, VNRequestSpecifying> {
    unsigned int _requestClassCode;
    unsigned long long _requestRevision;
    NSString *_cachedRequestClassName;
    Class _cachedRequestClass;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned int requestClassCode;
@property (readonly, copy) NSArray *allModelEquivalents;
@property (readonly) char observationProvidesBoundsNormalizedToROI;
@property (readonly) char isPublicRequestClass;
@property (readonly) char isPrivateRequestClass;
@property (readonly) char isPublicRevision;
@property (readonly) char isPrivateRevision;
@property (readonly) char isPublic;
@property (readonly) char isPrivate;
@property (readonly, nonatomic) unsigned long long requestRevision;
@property (readonly, copy) NSString *requestClassName;

+ (id)allAvailableRequestClassNames;
+ (id)availablePrivateRequestClassNames;
+ (id)availableRequestClassNames;
+ (id)specifierForRequest:(id)a0;
+ (id)specifierForRequestClass:(Class)a0 revision:(unsigned long long)a1 error:(id *)a2;
+ (id)specifierForRequestClassCode:(unsigned int *)a0 revision:(unsigned long long)a1 error:(id *)a2;
+ (id)specifierForRequestClassName:(id)a0 revision:(unsigned long long)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)specifiesRequestClass:(Class)a0 revision:(unsigned long long)a1;
- (char)hasModelEquivalencyToRequestSpecifier:(id)a0;
- (id)initWithRequestClass:(Class)a0 name:(id)a1 code:(unsigned int)a2 revision:(unsigned long long)a3;
- (char)representsSupportedRequestAndReturnError:(id *)a0;
- (Class)requestClassAndReturnError:(id *)a0;
- (char)specifiesAnyRequestClass:(Class)a0;
- (char)specifiesAnyRequestClassName:(id)a0;
- (char)specifiesRequestClass:(Class)a0;
- (char)specifiesRequestClass:(Class)a0 withAnyRevision:(unsigned long long)a1;
- (char)specifiesRequestClassName:(id)a0;
- (char)specifiesRequestClassName:(id)a0 revision:(unsigned long long)a1;
- (char)specifiesRequestClassName:(id)a0 withAnyRevision:(unsigned long long)a1;

@end
