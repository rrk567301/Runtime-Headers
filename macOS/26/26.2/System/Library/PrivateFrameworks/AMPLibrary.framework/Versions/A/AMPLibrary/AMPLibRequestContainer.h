@class AMPLibModelKind;

@interface AMPLibRequestContainer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMPLibModelKind *libModelKind;
@property (readonly, nonatomic) unsigned long long identifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLibModelKind:(id)a0 iTunesLibraryPersistentID:(unsigned long long)a1;

@end
