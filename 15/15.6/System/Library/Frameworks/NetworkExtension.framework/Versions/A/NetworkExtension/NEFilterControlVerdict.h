@interface NEFilterControlVerdict : NEFilterNewFlowVerdict <NSSecureCoding, NSCopying> {
    char _updateRules;
    char _handledByDataProvider;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)allowVerdictWithUpdateRules:(char)a0;
+ (id)dropVerdictWithUpdateRules:(char)a0;
+ (id)updateRules;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
