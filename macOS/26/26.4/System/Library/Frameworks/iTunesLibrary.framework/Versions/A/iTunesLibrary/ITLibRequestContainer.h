@class ITLibModelKind;

@interface ITLibRequestContainer : NSObject

@property (retain, nonatomic) ITLibModelKind *libModelKind;
@property (readonly, nonatomic) unsigned long long iTunesLibraryPersistentID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLibModelKind:(id)a0 iTunesLibraryPersistentID:(unsigned long long)a1;

@end
