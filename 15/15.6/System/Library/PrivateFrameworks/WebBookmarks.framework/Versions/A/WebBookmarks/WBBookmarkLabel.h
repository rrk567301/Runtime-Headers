@class NSString;

@interface WBBookmarkLabel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic, getter=isPinned) char pinned;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)labelWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 address:(id)a1 pinned:(char)a2;
- (id)labelWithAddress:(id)a0;
- (id)labelWithPinned:(char)a0;

@end
