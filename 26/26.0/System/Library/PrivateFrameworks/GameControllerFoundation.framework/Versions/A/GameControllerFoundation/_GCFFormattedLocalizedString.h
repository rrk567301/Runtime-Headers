@class NSString, GCFLocalizedString;

@interface _GCFFormattedLocalizedString : GCFLocalizedString {
    GCFLocalizedString *_format;
    GCFLocalizedString *_arg;
    NSString *__realizedString;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)bundle;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)key;
- (id)initWithCoder:(id)a0;
- (id)table;
- (id)initWithFormat:(id)a0 arg:(id)a1;
- (id)_realizedString;

@end
