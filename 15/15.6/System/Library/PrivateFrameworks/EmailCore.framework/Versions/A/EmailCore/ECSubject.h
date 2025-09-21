@class NSString;

@interface ECSubject : NSObject <NSCopying, NSSecureCoding, EFPubliclyDescribable> {
    unsigned long long _hasReplyPrefixState;
    unsigned long long _hasForwardPrefixState;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *subjectWithoutPrefix;
@property (copy, nonatomic) NSString *prefix;
@property (readonly, copy, nonatomic) NSString *subjectString;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long prefixLength;
@property (readonly, nonatomic) char hasPrefix;
@property (readonly, nonatomic) char hasReplyPrefix;
@property (readonly, nonatomic) char hasForwardPrefix;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_prefixTruncatedToMaximumAllowableSize:(id)a0;
+ (id)_subjectTruncatedToMaximumAllowableSize:(id)a0;
+ (id)_uniqueString:(id)a0 type:(long long)a1;
+ (id)subjectWithString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToString:(id)a0;
- (char)isEqualToSubjectIgnoringPrefix:(id)a0;
- (id)initWithPrefix:(id)a0 subjectWithoutPrefix:(id)a1;
- (char)isEqualToSubject:(id)a0;

@end
