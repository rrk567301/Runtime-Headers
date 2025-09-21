@class NSUUID, NSDictionary, NSString, NSError;

@interface CATTaskProgress : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (nonatomic) unsigned long long phase;
@property (retain, nonatomic) id resultObject;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) BOOL isCancelable;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) long long completedUnitCount;
@property (nonatomic) long long totalUnitCount;
@property (copy, nonatomic) NSString *requestClassName;
@property (readonly, nonatomic) unsigned long long state;

+ (Class)classForResultObjectWithRequestClassName:(id)a0;
+ (id)progressForOperation:(id)a0;
+ (void)assertResultObject:(id)a0 isValidForRequestClassName:(id)a1;

- (id)initWithOperation:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setProgress:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)progressStateDescription;
- (id)initWithOperationUUID:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
