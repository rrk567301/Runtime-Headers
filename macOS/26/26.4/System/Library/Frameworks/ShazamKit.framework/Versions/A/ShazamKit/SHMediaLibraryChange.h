@class NSIndexPath;
@protocol SHMediaLibraryItem;

@interface SHMediaLibraryChange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<SHMediaLibraryItem> libraryItem;
@property (readonly) long long changeType;
@property (readonly) NSIndexPath *indexPath;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithLibraryItem:(id)a0 changeType:(long long)a1;
- (id)_initWithLibraryItem:(id)a0 changeType:(long long)a1 indexPath:(id)a2;
- (id)initWithLibraryItem:(id)a0 changeType:(long long)a1 indexPath:(id)a2;
- (BOOL)isConflictingChange:(id)a0;
- (BOOL)isEqualChange:(id)a0;

@end
