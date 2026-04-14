@class NSString, NSUUID, NSDate;

@interface RTAuthorizedLocationVisitLog : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSUUID *visitIdentifier;
@property (readonly, copy, nonatomic) NSDate *registrationDate;

+ (id)createWithAuthorizedLocationVisitLogMO:(id)a0;
+ (id)createWithManagedObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVisitIdentifier:(id)a0 registrationDate:(id)a1;
- (id)managedObjectWithContext:(id)a0;

@end
