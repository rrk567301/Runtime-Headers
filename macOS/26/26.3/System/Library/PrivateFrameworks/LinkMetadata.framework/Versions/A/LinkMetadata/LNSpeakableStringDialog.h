@class LNSpeakableString, NSString;

@interface LNSpeakableStringDialog : LNDialog <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNSpeakableString *fullSpeakableString;
@property (readonly, copy, nonatomic) LNSpeakableString *supportingSpeakableString;
@property (readonly, copy, nonatomic) NSString *systemImageName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFullSpeakableString:(id)a0 supportingSpeakableString:(id)a1 systemImageName:(id)a2 localeIdentifier:(id)a3;

@end
