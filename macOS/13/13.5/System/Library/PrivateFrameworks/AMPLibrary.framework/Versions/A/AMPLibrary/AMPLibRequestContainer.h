@interface AMPLibRequestContainer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long libItemKind;
@property (readonly, nonatomic) unsigned long long iTunesLibraryPersistentID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLibItemKind:(unsigned long long)a0 iTunesLibraryPersistentID:(unsigned long long)a1;

@end
