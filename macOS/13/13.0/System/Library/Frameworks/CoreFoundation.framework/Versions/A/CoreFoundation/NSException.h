@class NSString, NSDictionary, NSArray;

@interface NSException : NSObject <NSCopying, NSSecureCoding> {
    NSString *name;
    NSString *reason;
    NSDictionary *userInfo;
    id reserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *reason;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly, copy) NSArray *callStackReturnAddresses;
@property (readonly, copy) NSArray *callStackSymbols;

+ (id)aggregateExceptionWithExceptions:(id)a0;
+ (id)validationExceptionWithFormat:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)exceptionWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
+ (void)raise:(id)a0 format:(id)a1 arguments:(char *)a2;
+ (void)raise:(id)a0 format:(id)a1;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)exceptionAddingEntriesToUserInfo:(id)a0;
- (id)exceptionRememberingObject:(id)a0 key:(id)a1;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isUnarchived;
- (void)_markAsUnarchived;
- (BOOL)_installStackTraceKeyIfNeeded;
- (void)raise;
- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;

@end
