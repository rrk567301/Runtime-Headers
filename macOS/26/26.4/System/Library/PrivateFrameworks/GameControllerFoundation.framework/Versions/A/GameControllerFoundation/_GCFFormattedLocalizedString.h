@class NSString, GCFLocalizedString;

@interface _GCFFormattedLocalizedString : GCFLocalizedString {
    GCFLocalizedString *_format;
    GCFLocalizedString *_arg;
    NSString *__realizedString;
}

+ (BOOL)supportsSecureCoding;

- (id)key;
- (id)bundle;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)table;
- (id)initWithFormat:(id)a0 arg:(id)a1;
- (id)_realizedString;

@end
