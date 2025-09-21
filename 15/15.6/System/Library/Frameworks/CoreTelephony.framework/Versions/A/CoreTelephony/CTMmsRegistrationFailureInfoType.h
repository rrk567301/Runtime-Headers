@class NSNumber;

@interface CTMmsRegistrationFailureInfoType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *pdpContextId;
@property (nonatomic) char dataActive;
@property (nonatomic) char isDataAttached;
@property (nonatomic) char activationForMms;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToCTMmsRegistrationFailureInfoType:(id)a0;

@end
