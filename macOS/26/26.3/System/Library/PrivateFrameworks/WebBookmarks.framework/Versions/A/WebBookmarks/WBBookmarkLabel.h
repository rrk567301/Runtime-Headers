@class NSString;

@interface WBBookmarkLabel : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;

- (id)labelWithPinned:(BOOL)a0;
- (id)description;
- (id)init;
- (id)labelWithAddress:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 address:(id)a1 pinned:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)labelWithTitle:(id)a0;

@end
