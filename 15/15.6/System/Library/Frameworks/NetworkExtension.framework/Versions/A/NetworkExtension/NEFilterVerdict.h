@class NSString;

@interface NEFilterVerdict : NSObject <NEPrettyDescription, NSSecureCoding, NSCopying> {
    char _remediate;
    char _urlAppendString;
    char _pause;
    NSString *_remediationURLMapKey;
    NSString *_remediationButtonTextMapKey;
    NSString *_urlAppendStringMapKey;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) long long filterAction;
@property char needRules;
@property char drop;
@property char shouldReport;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithDrop:(char)a0 remediate:(char)a1;

@end
