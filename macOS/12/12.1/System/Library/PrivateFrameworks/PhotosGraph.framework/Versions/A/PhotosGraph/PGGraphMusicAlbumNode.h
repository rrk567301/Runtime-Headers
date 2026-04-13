@class NSString;

@interface PGGraphMusicAlbumNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSString *title;

- (id)description;
- (unsigned short)domain;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)propertyDictionary;

@end
