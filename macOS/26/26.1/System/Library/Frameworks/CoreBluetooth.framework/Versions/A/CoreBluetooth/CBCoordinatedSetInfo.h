@class NSString, NSMutableArray;

@interface CBCoordinatedSetInfo : NSObject

@property (retain, nonatomic) NSMutableArray *connectedIdentifiers;
@property (retain, nonatomic) NSString *setName;
@property (nonatomic) unsigned char setSize;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInfo:(id)a0 withSize:(unsigned char)a1;

@end
