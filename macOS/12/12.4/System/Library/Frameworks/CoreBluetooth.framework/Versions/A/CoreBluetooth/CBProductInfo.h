@class NSString;

@interface CBProductInfo : NSObject

@property (readonly, nonatomic) unsigned int flags;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, nonatomic) unsigned int productID;
@property (readonly, nonatomic) unsigned int radarComponentID;
@property (readonly, copy, nonatomic) NSString *sfSymbolNameCase;
@property (readonly, copy, nonatomic) NSString *sfSymbolNameMain;
@property (readonly, nonatomic) unsigned short vendorIDBluetooth;
@property (readonly, nonatomic) unsigned short vendorIDUSB;

+ (id)productInfoWithProductID:(unsigned int)a0;

- (void).cxx_destruct;
- (id)initWithProductInfoPtr:(const struct { unsigned int x0; id x1; unsigned int x2; unsigned int x3; id x4; id x5; unsigned short x6; unsigned short x7; } *)a0;

@end
