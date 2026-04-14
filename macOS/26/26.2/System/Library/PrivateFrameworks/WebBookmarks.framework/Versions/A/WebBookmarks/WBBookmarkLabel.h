@class NSString;

@interface WBBookmarkLabel : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)labelWithAddress:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)labelWithPinned:(BOOL)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:(id)a0 address:(id)a1 pinned:(BOOL)a2;
- (id)init;
- (id)labelWithTitle:(id)a0;

@end
