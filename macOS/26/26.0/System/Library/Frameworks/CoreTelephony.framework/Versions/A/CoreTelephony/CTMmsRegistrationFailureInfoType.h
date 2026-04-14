@class NSNumber;

@interface CTMmsRegistrationFailureInfoType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *pdpContextId;
@property (nonatomic) BOOL dataActive;
@property (nonatomic) BOOL isDataAttached;
@property (nonatomic) BOOL activationForMms;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToCTMmsRegistrationFailureInfoType:(id)a0;

@end
