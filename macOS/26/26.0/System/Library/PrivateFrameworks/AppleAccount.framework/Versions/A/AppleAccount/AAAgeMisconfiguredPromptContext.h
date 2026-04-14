@class NSString;

@interface AAAgeMisconfiguredPromptContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0 bundleID:(id)a1;
- (id)initWithAltDSID:(id)a0 bundleID:(id)a1 title:(id)a2 message:(id)a3;

@end
