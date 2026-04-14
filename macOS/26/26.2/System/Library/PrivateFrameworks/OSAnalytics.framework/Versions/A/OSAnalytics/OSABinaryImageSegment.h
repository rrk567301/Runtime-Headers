@class OSASymbolInfo;

@interface OSABinaryImageSegment : NSObject

@property int source;
@property unsigned long long used_index;
@property (readonly, nonatomic) OSASymbolInfo *symbolInfo;

- (id)details;
- (id)initWithAddress:(unsigned long long)a0 size:(unsigned long long)a1 for:(unsigned char[16])a2;
- (id)initWithSource:(unsigned long long)a0 size:(unsigned long long)a1 for:(unsigned char[16])a2 source:(int)a3;
- (void).cxx_destruct;
- (id)full_details;
- (id)initWithSymbol:(id)a0 source:(int)a1;

@end
