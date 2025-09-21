@class NSString;

@interface RBSProcessExitStatus : NSObject <RBSXPCSecureCoding, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned int domain;
@property (readonly, nonatomic) unsigned long long code;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)statusWithDomain:(unsigned int)a0 code:(unsigned long long)a1;
+ (char)supportsRBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)error;
- (id)initWithCoder:(id)a0;
- (char)isCrash;
- (id)_dictionaryRepresentation;
- (id)_initWithDictionaryRepresentation:(id)a0;
- (char)_isVoluntary;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (char)isFairPlayFailure;
- (char)isJetsam;
- (char)isSignal;

@end
