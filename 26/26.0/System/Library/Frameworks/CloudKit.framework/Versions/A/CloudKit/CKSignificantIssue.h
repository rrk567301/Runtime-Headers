@class NSString, CKSourceCodeLocation, NSArray;

@interface CKSignificantIssue : NSObject <CKPropertiesDescription, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *processName;
@property (readonly) int processIdentifier;
@property (readonly, copy) CKSourceCodeLocation *sourceCodeLocation;
@property (readonly, copy) NSArray *callStackSymbols;
@property (readonly, copy) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)exception;
- (id)initWithSourceCodeLocation:(id)a0 format:(id)a1;
- (id)initWithSourceCodeLocation:(id)a0 format:(id)a1 arguments:(char *)a2;
- (id)initWithSourceCodeLocation:(id)a0 reason:(id)a1;

@end
