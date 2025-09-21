@class NSUUID, NSString, NSSet;

@interface TTSSubstitution : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *originalString;
@property (copy, nonatomic) NSString *replacementString;
@property (copy, nonatomic) NSString *phonemes;
@property (copy, nonatomic) NSSet *languages;
@property (copy, nonatomic) NSSet *voiceIds;
@property (nonatomic) char active;
@property (nonatomic) char ignoreCase;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } replacementRange;
@property (nonatomic) char appliesToAllApps;
@property (copy, nonatomic) NSSet *bundleIdentifiers;
@property (readonly, nonatomic) char isReplacementTextAllPunctuation;
@property (readonly, nonatomic) char isReplacementTextSurroundedByPunctuation;
@property (nonatomic) char isUserSubstitution;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
