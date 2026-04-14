@class NSString, GCFLocalizedString;

@interface _GCFFormattedLocalizedString : GCFLocalizedString {
    GCFLocalizedString *_format;
    GCFLocalizedString *_arg;
    NSString *__realizedString;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bundle;
- (id)key;
- (id)table;
- (id)_realizedString;
- (id)initWithFormat:(id)a0 arg:(id)a1;

@end
