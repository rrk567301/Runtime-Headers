@interface ITLibRequestScopedContainer : NSObject

@property (nonatomic) unsigned long long libItemKind;
@property (readonly, nonatomic) unsigned long long iTunesLibraryPersistentID;

- (id)initWithLibItemKind:(unsigned long long)a0 iTunesLibraryPersistentID:(unsigned long long)a1;

@end
