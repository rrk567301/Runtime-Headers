@class NSString, GCFLocalizedString;

@interface _GCFFormattedLocalizedString : GCFLocalizedString {
    GCFLocalizedString *_format;
    GCFLocalizedString *_arg;
    NSString *__realizedString;
}

+ (BOOL)supportsSecureCoding;

- (id)bundle;
- (id)key;
- (Class)classForCoder;
- (id)table;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFormat:(id)a0 arg:(id)a1;
- (id)_realizedString;

@end
