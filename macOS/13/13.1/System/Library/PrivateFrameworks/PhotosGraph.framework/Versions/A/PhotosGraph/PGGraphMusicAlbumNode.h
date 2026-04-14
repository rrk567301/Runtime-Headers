@class NSString;

@interface PGGraphMusicAlbumNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSString *title;

- (id)description;
- (unsigned short)domain;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;

@end
