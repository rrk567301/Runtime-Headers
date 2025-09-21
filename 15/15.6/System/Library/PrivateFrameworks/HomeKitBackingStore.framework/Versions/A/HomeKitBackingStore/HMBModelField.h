@class NSString, HMFVersion;

@interface HMBModelField : HMFObject <NSCopying, NSMutableCopying>

@property (nonatomic, getter=isOptional) char optional;
@property (nonatomic) unsigned long long loggingVisibility;
@property (retain, nonatomic) id defaultValue;
@property (copy, nonatomic) HMFVersion *readonlyVersion;
@property (copy, nonatomic) HMFVersion *unavailableVersion;
@property (retain, nonatomic) NSString *externalRecordField;
@property (nonatomic) char encrypted;
@property (nonatomic) char excludeFromCloudStorage;
@property (nonatomic) char conformsToHMBModelNativeCKWrapper;
@property (copy, nonatomic) id /* block */ encodeBlock;
@property (copy, nonatomic) id /* block */ decodeBlock;
@property (copy, nonatomic) id /* block */ descriptionBlock;
@property (readonly, nonatomic) Class classObj;

+ (id)fieldWithClass:(Class)a0;
+ (id)optionalFieldWithClass:(Class)a0 options:(id)a1;
+ (id)deprecatedField;
+ (id)fieldWithClass:(Class)a0 options:(id)a1;
+ (id)optionalFieldWithClass:(Class)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithClass:(Class)a0;
- (id)decodeQueryableValue:(id)a0;
- (id)descriptionForEncodedQueryableValue:(id)a0;
- (id)encodeQueryableValue:(id)a0;
- (id)initWithClass:(Class)a0 options:(id)a1;

@end
