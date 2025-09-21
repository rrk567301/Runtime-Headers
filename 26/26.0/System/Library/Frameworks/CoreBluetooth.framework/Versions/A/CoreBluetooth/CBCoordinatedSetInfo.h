@class NSString, NSMutableArray;

@interface CBCoordinatedSetInfo : NSObject

@property (retain, nonatomic) NSMutableArray *connectedIdentifiers;
@property (retain, nonatomic) NSString *setName;
@property (nonatomic) unsigned char setSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0 withSize:(unsigned char)a1;

@end
