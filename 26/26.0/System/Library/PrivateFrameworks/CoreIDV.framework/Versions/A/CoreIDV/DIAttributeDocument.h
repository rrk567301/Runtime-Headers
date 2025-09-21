@class NSArray, NSString;

@interface DIAttributeDocument : DIAttribute <NSSecureCoding> {
    NSString *_idDocType;
    unsigned long long _docType;
    NSArray *_acceptableDocs;
    unsigned long long _acceptableDocTypes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long acceptableDocTypes;
@property (copy, nonatomic) NSArray *acceptableDocs;
@property (nonatomic) NSString *idDocType;
@property (nonatomic) unsigned long long docType;
@property (copy, nonatomic, getter=getCurrentValue) NSArray *currentValue;

- (id)defaultValue;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAcceptableDocs:(id)a0;

@end
