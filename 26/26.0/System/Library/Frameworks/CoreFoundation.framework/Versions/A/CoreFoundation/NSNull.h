@class NSString;

@interface NSNull : NSObject <CAAction, BMDSLNativeJSONArchiving, CCDatabaseValue, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)scriptingMissingValueWithDescriptor:(id)a0;
+ (void)bmdsl_nativeSupportForEncodingAsJSON;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)null;

- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_scriptingCount;
- (BOOL)_scriptingCanHandleCommand:(id)a0;
- (unsigned long long)_scriptingCountOfValueForKey:(id)a0;
- (BOOL)_scriptingExists;
- (BOOL)_scriptingMightHandleCommand:(id)a0;
- (id)_scriptingNullDescriptor;
- (void)_scriptingRemoveValueForSpecifier:(id)a0;
- (id)_scriptingSetValue:(id)a0 forSpecifier:(id)a1;
- (void)runActionForKey:(id)a0 object:(id)a1 arguments:(id)a2;
- (id)CAMLType;
- (id)databaseValue_toData;
- (id)databaseValue_toNumber;
- (id)databaseValue_toString;
- (long long)databaseValue_type;
- (unsigned long long)_cfTypeID;
- (id)autorelease;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithCoder:(id)a0;
- (oneway void)release;

@end
