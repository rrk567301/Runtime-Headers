@class NSString, NSDate;

@interface RTAuthorizedLocationConfirmationStatus : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long confirmationStatusCode;
@property (nonatomic) long long confirmationStatus;
@property (retain, nonatomic) NSDate *confirmationStatusTime;
@property (nonatomic) long long zdrConfirmationStatusCode;
@property (nonatomic) long long zdrConfirmationStatus;
@property (retain, nonatomic) NSDate *zdrConfirmationStatusTime;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithAuthorizedLocationCofirmationStatusMO:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)managedObjectWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfirmationStatus:(long long)a0 statusCode:(long long)a1 timeOfEvent:(id)a2 zdrStatus:(long long)a3 zdrStatusCode:(long long)a4 zdrTimeOfEvent:(id)a5;

@end
