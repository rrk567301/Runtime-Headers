@interface SKTileStamp : NSObject <NSSecureCoding> {
    unsigned int _columns;
    unsigned int _rows;
    unsigned int *_tileData;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long numberOfColumns;
@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (readonly, nonatomic) unsigned int *tileData;

+ (id)tileStampWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 tileData:(unsigned int *)a2;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToNode:(id)a0;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 tileData:(unsigned int *)a2;
- (void)setTileData:(unsigned int *)a0 size:(unsigned long long)a1;
- (id)tileDefinitionsForTileMap:(id)a0;

@end
