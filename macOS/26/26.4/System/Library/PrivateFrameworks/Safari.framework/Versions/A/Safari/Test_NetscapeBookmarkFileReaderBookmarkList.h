@class NSArray, NSDictionary;

@interface Test_NetscapeBookmarkFileReaderBookmarkList : Test_NetscapeBookmarkFileReaderBookmarkItem

@property (readonly, copy, nonatomic) NSArray *children;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (id)firstChildWithTitle:(id)a0;
- (id)firstFolderWithTitle:(id)a0;

@end
