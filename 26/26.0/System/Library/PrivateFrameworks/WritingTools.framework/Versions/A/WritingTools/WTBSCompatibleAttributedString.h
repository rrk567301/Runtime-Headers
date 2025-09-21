@class NSString, NSAttributedString;

@interface WTBSCompatibleAttributedString : NSObject <NSSecureCoding, BSXPCCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSAttributedString *attributedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedClasses;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
