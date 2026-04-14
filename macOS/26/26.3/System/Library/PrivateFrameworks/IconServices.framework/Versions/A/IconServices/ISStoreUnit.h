@class NSData, NSUUID;

@interface ISStoreUnit : NSObject

@property (readonly) NSData *data;
@property (readonly) NSUUID *UUID;

+ (id)storeUnitWithStoreURL:(id)a0 UUID:(id)a1;
+ (id)storeUnitWithData:(id)a0;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 UUID:(id)a1;
- (BOOL)isValid;
- (void)remapWithStoreURL:(id)a0;

@end
