@class NSString;

@interface IMDImportPlaceholderReplacementPair : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ placeholder;
    void /* function */ replacement;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *replacement;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPlaceholder:(id)a0 replacement:(id)a1;

@end
